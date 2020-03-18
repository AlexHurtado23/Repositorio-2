The commands for git bash

Chapter 2:

For Configuration:

$git config --global user.name " "

Sets the name you want attached to your commit trasactions.


$git config --global user.email" "

Sets the e-mail you want to attached to your commit trasactions.


$git config --global color.ui auto

Enables helpful colorization of command line output.



For Create Repositories:

$git init 

Turn an existent directory into a git repository.


$git clone [url]

Clone (download) a repository that alreay exist on Github, including all of the files, branches and commits.



Chapter 3:

Branches: any commits you make will be made on the branch you are currently "cheked out" to. Use "git status" to see which branch that is.


$git branch [branch-name]

Creates a new branch.


$git branch -v

To see the latest confirmation of changes in each branch.


$git branch -vv

To see the tracking branches you have assigned, this will list your local branches with more information,
including what each branch follows and whether your local branch is ahed, behind or both. 


$git branch --merged

To see the branches that have been merged with the active branch.


$git branch --no-merged

To show all branches containing unbound jobs.


$git branch -u

If you already have a local branch and you want to assign it to a remote branch that you just brought you, or you want to change the branch that you follow up on.


$git checkout [branch-name]

Swiches to the specified branch and updates the working directory.


$git checkout -b

To create a new branch and jump to it, in one step.


$git checkout --track

Prepare other monitoring branches if you want to have some that follow other remote branches.


$git checkout -b sf

To prepare a local branch with a different name than the remote one, you can use the first version with a different local branch name.


$git merge [branch]

Combines the specified branch´s history into the current branch.


$git branch -d [branch-name]

Delates the specified branch.


$git rebase 

Capture all committed changes in one branch and reapply them to another.

$git rebase --onto master [branch1] [branch2]

You can take changes from another collaborator that are not in Branch2 and reapply them on your main branch.


$git rebase [base-branch] [point-brach]

You can reorganize the point-branch over the base-branch without even checking it beforehand, which activates the point-branch
and applies it about the base-branch.


$git rebase teamone/master 



Synchronize changes:


$git fetch

Downloads all the history from the remote tracking branches.


$git fetch origin

This command locates which server the source is on, retrieves any data present there that you don't have, and updates your local database.


$git merge

Combines remote tracking branch into current local branch.


$git push

Uploads all the local branch commits to Github.


$git push --force

To overwrite the registry on the server.


$git push origin --delete [branch]

To deleate a remote branch.


$git pull 

Updates all local working branch with all new commits from the corresponding remote branch of Github.


$git pull --rebase 



Make Changes:

$git log

Lists version history for the current branch.


$git log --follow [file]

Lists version history for a file, including renames.


$git log --decorate

To show where each branch is apointed.


$git log --oneline --decorate --graph --all

It will show you the history of your confirmations, indicating where the pointers of your branches are and how your history has diverged.


$git diff [first branch]...[second branch]

Shows content differences between two branches.


$git show [commit]

Outputs metadata and content changes of the specified commit.


$git add [file]

Snapshots the file in preparation of versioning.


$git commit -m "[descriptive message]"

Records file snapshots permanently in version history.



Redo commits:

$git reset [commit]

Undoes all commits after [commit] persevering changes locally.


$git reset --hard [commit]

Discard all history and changes back to the specified commit.



Glossary

git: an opensourse, distributed version-control system.

Github: a platform for husting and collaborating on Git repositories.

commit: a Git object, a snapshot of your entire repository compresed into a SHA.

branch: a lightweight movable pointer to a commit.

clone: a local version of a repository, including all commits and branches.

remote: a common repository o Github that all team member use to exchange their changes.

fork: a copy of a repository on Github owned by a different user.

pull request: a place to compare and discuss the differences introduced on a branch with reviews, commits, integrated test, and more.

HEAD: representing your current work directory, the HEAD pointer can be made to a different branches, tags, or commits when using "git checkout".
