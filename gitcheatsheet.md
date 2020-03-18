#The commands for git bash

___


##Chapter 2:

###For Configuration:

    $ git config --global user.name " "

*Sets the name you want attached to your commit trasactions.*


    $ git config --global user.email" "

*Sets the e-mail you want to attached to your commit trasactions.*


    $ git config --global color.ui auto

*Enables helpful colorization of command line output.*


    $ git config --gloabal core.editor

*Get acces to the editor.*


    $ git config --global alias.co checkout

*Replaces a 'git checkout'.*


    $ git config --global alias.br branch

*Replaces a 'git branch'.*


    $ git config --global alias.ci commit

*Replaces a 'git commit'.*


    $ git config --global alias.st status

*Replaces a 'git status'.*


    $ git config --global alias.unstage ""

*To correct the usability problem you found when removing a file from the preparation area.*


    $ git config --global alias.last ""

*Easily see what the last confirmation was. ´git last´*


    $ git config --global alias.visual "!gitk"

*Run an external command instead of a Git subcommand. In that case, you can start the command with 
a character (!) This is useful if you write your own tools to work with a Git repository*


___


###For Create Repositories:

    $ git init 

*Turn an existent directory into a git repository.*


    $ git clone [url]

*Clone (download) a repository that alreay exist on Github, including all of the files, branches and commits.*


    $ git add .
 
*To specify which files you want to control.*


    $ git status
*Determine which files are in what state.*


    $ git status -s

*Get an abbreviated status, so you can see your changes in a more compact way.*


    $ cat .[file]

*To see the content of the file.*


    $ git rm

*To delete Git files, you need to delete them from your tracked files and then confirm.*


    $ git rm --cached [file]

*Keep the file in your working directory but delete it from the preparation area.*


    $ git mv file_from file_to

*Rename a file.*


    $ git remote 

*It will show the names of each of the remotes you have specified.*


    $ git remote -v 

*Shows the URLs that Git has associated with the name and that will be used when reading and writing on that remote.*


    $ git remote show [remote-name]

*To see more information about a particular remote.*


    $ git remote rename 

*Rename a remote reference.*


    $ git remote rm

*Delete a remote.*


    $ git tag 

*List available tags.*


    $ git -a [tag-name]

*Create an annotated tag in Git.*


    $ git tag -m [message]

*Specify the label message.*


    $ git show [tag]

*To show the information from a specific tag.*


___


##Chapter 3:

###Branches: any commits you make will be made on the branch you are currently "cheked out" to. Use "git status" to see which branch that is.


    $ git branch [branch-name]

*Creates a new branch.*


    $ git branch -v

*To see the latest confirmation of changes in each branch.*


    $ git branch -vv

*To see the tracking branches you have assigned, this will list your local branches with more information,
including what each branch follows and whether your local branch is ahed, behind or both.*


    $ git branch --merged

*To see the branches that have been merged with the active branch.*


    $ git branch --no-merged

*To show all branches containing unbound jobs.*


    $ git branch -u

*If you already have a local branch, to assign it to a remote branch that you just brought you, or to change the branch that you follow up on.*


    $ git checkout [branch-name]

*Swiches to the specified branch and updates the working directory.*


    $ git checkout -b

*To create a new branch and jump to it, in one step.*


    $ git checkout --track

*Prepare other monitoring branches if you want to have some that follow other remote branches.*


    $ git checkout -b sf

*To prepare a local branch with a different name than the remote one, you can use the first version with a different local branch name.*


    $ git merge [branch]

*Combines the specified branch´s history into the current branch.*


    $ git branch -d [branch-name]

*Delates the specified branch.*


    $ git rebase 

*Capture all committed changes in one branch and reapply them to another.*


    $ git rebase --onto master [branch1] [branch2]

*You can take changes from another collaborator that are not in Branch2 and reapply them on your main branch.*


    $ git rebase [base-branch] [point-brach]

*You can reorganize the point-branch over the base-branch without even checking it beforehand, which activates the point-branch
and applies it about the base-branch.*


    $ git rebase teamone/master 

___


###Synchronize changes:


    $ git fetch

*Downloads all the history from the remote tracking branches.*


    $ git fetch origin

*This command locates which server the source is on, retrieves any data present there that you don't have, and updates your local database.*


    $ git fetch pb

*Use the name pb on the command line instead of the entire URL.*

    $ git merge

*Combines remote tracking branch into current local branch.*


    $ git push

*Uploads all the local branch commits to Github.*


    $ git push --force

*To overwrite the registry on the server.*


    $ git push origin --delete [branch]

*To deleate a remote branch.*


    $ git push [remote-name] [branch-name]

*When you have a project that you want to share, you must send it to a server.*


    $ git push origin --tags

*To send multiple labels at once.*


    $ git pull 

*Updates all local working branch with all new commits from the corresponding remote branch of Github.*


    $ git pull --rebase 

___


###Make Changes:

    $ git log

*Lists version history for the current branch.*


    $ git log --follow [file]

*Lists version history for a file, including renames.*


    $ git log --decorate

*To show where each branch is apointed.*


    $ git log --oneline --decorate --graph --all

*It will show you the history of your confirmations, indicating where the pointers of your branches are and how your history has diverged.*


    $ git log -p

*Shows the differences introduced in each confirmation.*


    $ git log -p -2 

*Show only the last two history entries are displayed.*


    $ git log --start

*To see some statistics of each confirmation.*


    $ git log --pretty=oneline

*To modify the output format, print each confirmation on a single line.*


    $ git log --pretty=format [extension]

*To specify the out put description*

-'%H'   Confimation hash. 

-'%h'   Shorthand confirmation hash.

-'%T'   Tree hash. 

-'%t'   Shorthand tree hash.

-'%P'   Hashes of parent confirmations.

-'%p'   Hashes of abbreviated parent confirmations.

-'%an'  Author´s name.

-'%ae'  Author's email address.

-'%ad'  Authorship date.

-'%ar'  Authorship date, relative. 

-'%cn'  Confirmer name.

-'%ce'  Confirmer email address.

-'%cd'  Confirmation date.

-'%cr'  Confirmation date, relative.

-'%s'   Affair.


    $ git log --pretty=format: [extension] --graph

*It add a little graphic.*


    $ git log --name-only 

*Displays the list of affected files.*


    $ git log --name-status

*Shows the list of affected files, also indicating if they were added, modified or deleted.*


    $ git log --abbrev-commit

*Shows only the first characters of the SHA-1 sum, instead of the 40 characters of which it is composed.*


    $ git log --relative-date

*Displays the date in relative format (for example, "2 weeks ago") instead of the full format.*


    $ git log --(-n)

*Only shows the last confirmations*


    $ git log --since [date], --after [date]

*Show those confirmations made after the specified date.*


    $ git log --until [date], before [date]

*Show those confirmations made before the specified date.*


    $ git log --author

*Show only those commits whose author matches the specified string.*


    $ git log --committer

*Shows only those commits whose commit matches the specified string.*


    $ git log -S

*Show only those commits that add or remove code that corresponds to the specified string.*


    $ git diff [first branch]...[second branch]

*Shows content differences between two branches.*


    $ git diff --staged

*To see what you have prepared and it will be included in the next confirmation.*


    $ git diff --cached

*To see what you have prepared so far.*


    $ git show [commit]

*Outputs metadata and content changes of the specified commit.*


    $ git add [file]

*Snapshots the file in preparation of versioning.*


    $ git commit -m "[descriptive message]"

*Records file snapshots permanently in version history.*


    $ git commit --amend

*Redo the confirmation.*


    $ git 


___


###Redo commits:

    $ git reset [commit]

*Undoes all commits after [commit] persevering changes locally.*


    $ git reset --hard [commit]

*Discard all history and changes back to the specified commit.*

___


##Glossary

-git: an opensourse, distributed version-control system.

-Github: a platform for husting and collaborating on Git repositories.

-commit: a Git object, a snapshot of your entire repository compresed into a SHA.

-branch: a lightweight movable pointer to a commit.

-clone: a local version of a repository, including all commits and branches.

-remote: a common repository o Github that all team member use to exchange their changes.

-fork: a copy of a repository on Github owned by a different user.

-pull request: a place to compare and discuss the differences introduced on a branch with reviews, commits, integrated test, and more.

-HEAD: representing your current work directory, the HEAD pointer can be made to a different branches, tags, or commits when using "git checkout".
