# push_cfile_to_github_working.py
import os
from git import Repo, GitCommandError

LOCAL_FOLDER = r"C:\Users\ntnit\Desktop\niku\cfile"
GITHUB_USER = "NTMAR"
GITHUB_REPO_NAME = "c_file"
COMMIT_MESSAGE = "Initial commit of all files"
GITHUB_TOKEN = "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"

REPO_URL = f"https://{GITHUB_TOKEN}@github.com/{GITHUB_USER}/{GITHUB_REPO_NAME}.git"

def push_to_github(local_folder, repo_url, commit_msg):
    if not os.path.isdir(local_folder):
        print(f"Error: Folder {local_folder} does not exist.")
        return

    try:
        # Initialize repo if not already a git repo
        if not os.path.isdir(os.path.join(local_folder, ".git")):
            repo = Repo.init(local_folder)
            # Create initial branch 'main'
            repo.git.checkout("-b", "main")
            origin = repo.create_remote("origin", repo_url)
        else:
            repo = Repo(local_folder)
            if "origin" not in [r.name for r in repo.remotes]:
                origin = repo.create_remote("origin", repo_url)
            else:
                origin = repo.remotes.origin

        # Stage all files
        repo.git.add(A=True)

        # Commit only if there is something to commit
        if repo.is_dirty(untracked_files=True):
            repo.index.commit(commit_msg)
        else:
            print("Nothing to commit (all files already committed).")

        # Push to GitHub
        origin.push(refspec="main:main")
        print("All files pushed successfully to GitHub!")

    except GitCommandError as e:
        print("Git error:", e)
    except Exception as e:
        print("Error:", e)

if __name__ == "__main__":
    push_to_github(LOCAL_FOLDER, REPO_URL, COMMIT_MESSAGE)
