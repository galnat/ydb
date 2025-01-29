import sys
import json
import re
import subprocess
import requests
from validate_pr_description import validate_pr_description

UNRELEASED = "[Unreleased]"
UNCATEGORIZED = "[Uncategorized]"

def to_dict(changelog_path):
    changelog = {}
    current_version = UNRELEASED
    current_category = UNCATEGORIZED

    with open(changelog_path, 'r') as file:
        for line in file:
            line = line.strip()
            if line.startswith("## "):
                current_version = line
                changelog[current_version] = {}
            elif line.startswith("### "):
                current_category = line
                changelog[current_version][current_category] = []
            elif line.startswith("- "):
                changelog[current_version][current_category].append(line)
    
    return changelog

def to_file(changelog_path, changelog):
    with open(changelog_path, 'w') as file:
        for version, categories in changelog.items():
            file.write(f"## {version}\n\n")
            for category, items in categories.items():
                file.write(f"### {category}\n")
                for item in items:
                    file.write(f"- {item}\n")
                file.write("\n")

def extract_changelog_category(description):
    category_section = re.search(r"### Changelog category.*?\n(.*?)(\n###|$)", description, re.DOTALL)
    if category_section:
        categories = [line.strip('* ').strip() for line in category_section.group(1).splitlines() if line.strip()]
        if len(categories) == 1:
            return categories[0]
    return None

def update_changelog(changelog_path, pr_data):
    changelog = to_dict(changelog_path)
    if UNRELEASED not in changelog:
        changelog[UNRELEASED] = {}

    for pr in pr_data:
        if validate_pr_description(pr["body"]):
            category = extract_changelog_category(pr["body"])
            if category:
                if category not in changelog[UNRELEASED]:
                    changelog[UNRELEASED][category] = []
                changelog[UNRELEASED][category].append(f"PR #{pr['number']}: {pr['body']}")

    to_file(changelog_path, changelog)

def run_command(command):
    result = subprocess.run(command, shell=True, check=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    return result.stdout.decode().strip()

def fetch_pr_details(pr_id):
    url = f"https://api.github.com/repos/{GITHUB_REPOSITORY}/pulls/{pr_id}"
    headers = {
        "Accept": "application/vnd.github.v3+json",
        "Authorization": f"token {GITHUB_TOKEN}"
    }
    response = requests.get(url, headers=headers)
    response.raise_for_status()
    return response.json()

if __name__ == "__main__":
    if len(sys.argv) != 5:
        print("Usage: update_changelog.py <pr_data_file> <changelog_path> <base_branch> <suffix>")
        sys.exit(1)

    pr_data_file = sys.argv[1]
    changelog_path = sys.argv[2]
    base_branch = sys.argv[3]
    suffix = sys.argv[4]

    GITHUB_REPOSITORY = subprocess.run(["git", "config", "--get", "remote.origin.url"], capture_output=True, text=True).stdout.strip().split(':')[1].replace('.git', '')
    GITHUB_TOKEN = subprocess.run(["git", "config", "--get", "github.token"], capture_output=True, text=True).stdout.strip()

    try:
        with open(pr_data_file, 'r') as file:
            pr_ids = json.load(file)
    except Exception as e:
        print(f"::error::Failed to read or parse PR data file: {e}")
        sys.exit(1)

    pr_data = []
    for pr in pr_ids:
        try:
            pr_details = fetch_pr_details(pr["id"])
            pr_data.append({
                "number": pr_details["number"],
                "body": pr_details["body"]
            })
        except Exception as e:
            print(f"::error::Failed to fetch PR details for PR #{pr['id']}: {e}")
            sys.exit(1)

    update_changelog(changelog_path, pr_data)

    branch_name = f"{base_branch}-{suffix}"
    run_command(f"git checkout -b {branch_name}")
    run_command(f"git add {changelog_path}")
    run_command(f"git commit -m 'Update CHANGELOG.md for {suffix}'")
    run_command(f"git push origin {branch_name}")

    pr_title = f"Update CHANGELOG.md for {suffix}"
    pr_body = f"This PR updates the CHANGELOG.md file for {suffix}."
    run_command(f"gh pr create --title '{pr_title}' --body '{pr_body}' --base {base_branch} --head {branch_name}")