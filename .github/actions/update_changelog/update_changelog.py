import sys

changelog_path = "E:/ydb/ydb/apps/ydb/CHANGELOG.md"

# import keepachangelog

# changelog = keepachangelog.to_dict("E:/ydb/ydb/apps/ydb/CHANGELOG.md")

valid_categories = [
    "New feature",
    "Experimental feature",
    "Improvement",
    "Performance improvement",
    "Bugfix",
    "Backward incompatible change"
]

# print(changelog)

if __name__ == "__main__":
    print(sys.argv)