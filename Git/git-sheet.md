# Create ssh key and link it to github
~~~
$ ssh-keygen -t ed25519 -C "your_email@example.com"         //You can also specify a different key type by replacing rsa with ed25519 or ecdsa if you prefer.
~~~
Your ssh key will be located at default location ~/.ssh.
- Now go to the location where the saved  ssh key is. by default at ~/.ssh/.it'll be named id_ed25519.pub. Depending upon the type of key it may be difficult.
- Copy it and go to your Github.
- Go to settings/SSH and GPG keys. Click on new ssh key and paste it.

Run
~~~
git config --global user.email "you@example.com"
git config --global user.name "Your Name"
~~~

to set your account's default identity.
Omit --global to set the identity only in this repository.

**Git Commands**

# Stash
```
$ git stash push [msg]                   // Save your local modifications to a new stash
$ git stash pop                          // Applies the changes from the last (or specified) stash and then removes the given stash.
$ git stash apply [stash]                // Move changes from the specified stash into the workspace. The latest stash is the default.
$ git stash list                         // List the stashes that you currently have.
$ git stash show [stash]                 // Show the changes recorded in the stash as a diff between the stashed state and its original parent. When no stash is given, shows the latest one.
$ git stash drop [stash]                 // Remove a single stashed state from the stash list. When no stash is given, it removes the latest one.
$ git stash clear                        // Remove all the stashed states. Note that those states will then be subject to pruning, and may be impossible to recover.
$ git stash branch <branchname> [stash]  // Creates and checks out a new branch named branchname starting from the commit at which the stash was originally created, applies the changes recorded in stash to the new working tree and index. 
```

# Workspace 
```
$ git status                              // Displays stuff
$ git diff                                // Displays the differences not added to the index.
$ git diff <commit or branch>             // View the changes you have in your workspace relative to the named commit.
$ git add <file... or dir...>             // Adds the current content of new or modified files to the index, thus staging that content for inclusion in the next commit.
$ git add -u                              // Adds the current content of modified (NOT NEW) files to the index. 
$ git rm <file(s)...>                     // Remove a file from the workspace and the index.
$ git mv <file(s)...>                     // Move file in the workspace and the index.
$ git commit -a [-m 'msg']                // Commit all files changed since your last commit, except untracked files (i.e. all files that are already listed in the index)
$ git checkout <file(s)... or dir>        // Updates the file or directory in the workspace. Does NOT switch branches.
$ git reset --hard                        // Matches the workspace and index to the local tree.  
$ git reset --hard <remote>/<branch>      // Reset local repo and working tree to match a remote-tracking branch. 
$ git switch <branch>                     // Switches branches by updating the index and workspace to reflect the specified branch, branch, and updating HEAD to be branch.
$ git checkout -b <branch>                // Create a branch and switch to it
$ git merge <commit or branch>            // Merge changes from branch name into current branch.
$ git rebase <upstream branch>            // Reverts all commits since the current branch diverged from upstream branch, and then re-applies them one-by-one on top of changes from the HEAD of upstream branch.
$ git cherry-pick <commit>                // Integrate changes in the given commit into the current branch.
$ git revert <commit>                     // Reverse commit specified by commit and commit the result. This requires your working tree to be clean (no modifications from the HEAD commit).
$ git clone <repo>                        // Download the repository specified by repo and checkout HEAD of the main branch.
$ git pull <remote> <refspec>             // Incorporates changes from a remote repository into the current branch. In its default mode, git pull is shorthand for git fetch followed by git merge FETCH_HEAD.
$ git clean                               //Cleans the working tree by recursively removing files that are not under version control, starting from the current directory. Use -n for a "dry run" to see what would be deleted. Use -f to delete the files.
```
