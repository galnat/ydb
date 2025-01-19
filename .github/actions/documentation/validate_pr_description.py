import sys
import re

def validate_pr_description(file_path):
    try:
        with open(file_path, 'r') as file:
            description = file.read()

        if not description.strip():
            print("::warning::PR description is empty. Please fill it out.")
            sys.exit(1)

        if "### Changelog entry" not in description:
            print("::warning::Missing '### Changelog entry'.")
            sys.exit(1)

        if "### Changelog category" not in description:
            print("::warning::Missing '### Changelog category'.")
            sys.exit(1)

        # Extract changelog category section
        category_section = re.search(r"### Changelog category\n(.*?)(\n###|$)", description, re.DOTALL)
        if not category_section:
            print("::warning::Changelog category section not found.")
            sys.exit(1)

        categories = [line.strip('* ').strip() for line in category_section.group(1).splitlines() if line.strip()]

        if len(categories) != 1:
            print("::warning::Only one category can be selected at a time.")
            sys.exit(1)

        category = categories[0]
        valid_categories = [
            "New feature",
            "Experimental feature",
            "Improvement",
            "Performance improvement",
            "Bugfix",
            "Backward incompatible change",
            "Documentation (changelog entry is not required)",
            "Not for changelog (changelog entry is not required)"
        ]

        if category not in valid_categories:
            print(f"::warning::Invalid Changelog category: {category}")
            sys.exit(1)

        if category not in ["Not for changelog (changelog entry is not required)", "Documentation (changelog entry is not required)"]:
            entry_section = re.search(r"### Changelog entry\n(.*?)(\n###|$)", description, re.DOTALL)
            if not entry_section or len(entry_section.group(1).strip()) < 20:
                print("::warning::Changelog entry is too short or missing.")
                sys.exit(1)

            if category == "Bugfix":
                # TODO: Add check for Yandex issue in addition to GitHub issue
                issue_pattern = r"https://github.com/ydb-platform/ydb/issues/\d+"
                if not re.search(issue_pattern, entry_section.group(1)):
                    print("::warning::Bugfix requires a linked issue in the changelog entry with the format 'https://github.com/ydb-platform/ydb/issues/<issue_number>'.")
                    sys.exit(1)

        print("PR description is valid.")

    except Exception as e:
        print(f"::error::Error during validation: {e}")
        sys.exit(1)

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("::error::Usage: python3 validate_pr_description.py <file_path>")
        sys.exit(1)

    validate_pr_description(sys.argv[1])
