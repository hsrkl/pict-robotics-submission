# Approach

First, I installed git and created a test repository for executing basic commands.
While following the tutorial, I made a list of common commands for recording my journey and for future reference.

While following the tutorial, I had to use `ssh` to connect my computer to my GitHub account so I can make changes remotely via the command line:

#### SSH Setup guides used:
https://docs.github.com/en/authentication/connecting-to-github-with-ssh/generating-a-new-ssh-key-and-adding-it-to-the-ssh-agent
https://docs.github.com/en/authentication/connecting-to-github-with-ssh/working-with-ssh-key-passphrases#auto-launching-ssh-agent-on-git-for-windows

#### Common commands

| Command    | Function                                                                  | Useful Flags                                                                      |
| ---------- | ------------------------------------------------------------------------- | --------------------------------------------------------------------------------- |
| `clone`    | Copies a hosted repo to your local machine                                |                                                                                   |
| `add`      | Tells git that you've made changes & moves everything to the staging area |                                                                                   |
| `commit`   | Saves your files in git                                                   | `-m` adds a message<br>`-a` for add                                               |
| `push`     | Uploads commits to a remote repo                                          | `-u` to set upstream = default place to commit to<br>`-d` to delete remote branch |
| `pull`     | Downloads changes from a remote repo                                      |                                                                                   |
| `status`   | shows all files that have been updated but not commited                   |                                                                                   |
| `remote`   | lets you configure a remote repository hosted elsewhere (like on github)  |                                                                                   |
| `checkout` | switches to a different branch                                            | `-b` to create and switch to a new branch                                         |
| `branch`   | Lets you manage and delete branches                                       | `-m` for move/rename<br>`-c` for copy<br>`-d` for delete                          |
| `merge`    | review process that lets you merge branches                               |                                                                                   |
| `reset`    | Lets you undo changes                                                     |                                                                                   |
