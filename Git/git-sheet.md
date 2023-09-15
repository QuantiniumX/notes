**Git Commands**

# Stash
```
$ git stash push [msg]                 // Save your local modifications to a new stash
$ git stash pop                        // Applies the changes from the last (or specified) stash and then removes the given stash.
$ git stash apply stash                // Move changes from the specified stash into the workspace. The latest stash is the default.
$ git stash list                       // List the stashes that you currently have.
$ git stash show stash                 // Show the changes recorded in the stash as a diff between the stashed state and its original parent. When no stash is given, shows the latest one.
$ git stash drop stash                 // Remove a single stashed state from the stash list. When no stash is given, it removes the latest one.
$ git stash clear                      // Remove all the stashed states. Note that those states will then be subject to pruning, and may be impossible to recover.
$ git stash branch branchname stash    // Creates and checks out a new branch named branchname starting from the commit at which the stash was originally created, applies the changes recorded in stash to the new working tree and index. 
```
