# Approach

I started by installing ubuntu using WSL2 on my computer, to able to actually execute the commands that I learn. I noted the following while learning to record my journey while also making a document for future reference.

## Basic commands

| Command              | Function                                                                                                                                                                        | Important Flags                                                               |
| -------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ----------------------------------------------------------------------------- |
| `clear`              | Clears the shell, `CTRL + L` keyboard shortcut.                                                                                                                                 |                                                                               |
| `cd`                 | change directory                                                                                                                                                                |                                                                               |
| `ls`                 | For listing files in a directory                                                                                                                                                | `-l` for detailed listing, `ll` alias                                         |
| `rm`                 | Remove file/folder                                                                                                                                                              | `-r` for recursive removal                                                    |
| `mv`                 | Move command, overwrites whatever's at the target path. Overwriting behaviour can be used to rename files.                                                                      |                                                                               |
| `cp`                 | Copy command                                                                                                                                                                    |                                                                               |
| `mkdir`              | make directory                                                                                                                                                                  |                                                                               |
| `sudo`               | Makes the command that follows execute as root                                                                                                                                  |                                                                               |
| `touch`              | Creates an empty file or updates the modification date, needs write permissions.                                                                                                |                                                                               |
| `echo`               | sort of like print() statements                                                                                                                                                 |                                                                               |
| `cat`                | Allows you to view, merge and create files (plaintext)                                                                                                                          |                                                                               |
| `head`<br>`tail`     | Lets you view the first/last lines of a file                                                                                                                                    | `-f` for follow<br>`-n <amt>` for first/last n lines                          |
| `nano`<br>`vim`      | Command-line text editors installed by default in most distros.                                                                                                                 |                                                                               |
| `which`              | Tells you where a binary is if it's installed.                                                                                                                                  |                                                                               |
| `alias`<br>`unalias` | Used to make quick shortcuts to commands. `unalias` for removing them.                                                                                                          |                                                                               |
| `chmod`              | Change mode command, used to give/take permissions.                                                                                                                             |                                                                               |
| `free`               | checks memory use                                                                                                                                                               |                                                                               |
| `df`                 | checks disk use                                                                                                                                                                 | `-h` for human readable format<br>`-i` to show inode use                      |
| `apt`                | Default package manager for debian-based systems.<br>`apt update` updates repositories<br>`apt upgrade` updates actual packages<br>`apt autoremove` to remove orphaned packages |                                                                               |
| `systemctl`          | Access to the systemd utility, allows you to `start`, `stop`, `restart` and view `status` of running processes.                                                                 |                                                                               |
| `journalctl`         | Helps you view logs, has useful features.                                                                                                                                       | `-u` to select a specific utility<br>`-f` for follow                          |
| `adduser`            | adds a user                                                                                                                                                                     |                                                                               |
| `su`                 | switch user, `su - user` logs into the user                                                                                                                                     |                                                                               |
| `logout`             | logs out of the user                                                                                                                                                            |                                                                               |
| `userdel`            | deletes a user                                                                                                                                                                  | `-r` removes the home directory                                               |
| `history`            | lets you view bash history, you can refer to commands by number using `!<number>`<br>`!!` runs the most recent command                                                          |                                                                               |
| `grep`               | lets you search text                                                                                                                                                            | `-v` for exclusion                                                            |
| `env`                | Displays environment variables for your session. Variables by default are not environment variables.                                                                            |                                                                               |
| `export`             | Used to define environment variables.                                                                                                                                           |                                                                               |
| `yum`<br>`dnf`       | Alternative package managers, default on distros like fedora                                                                                                                    |                                                                               |
| `ssh`                | Lets you connect to a computer and access it's terminal remotely. Requires openssh-server installed on the machine you're connecting to.                                        |                                                                               |
| `scp`                | secure copy protocol, lets you copy files to/from a remote computer                                                                                                             |                                                                               |
| `rsync`              | Similar tool to `scp`, much faster. Defaults to using the ssh protocol, can be changed with `-e`                                                                                | `-a` for archive mode<br>`-e` to change server<br>`--dry-run` to do a dry run |


## Symbols
`~` - Home directory
`/`- base drive
`..` - parent directory
`.` - current directory
`*` - wildcard
`|` - pipe symbol, lets you chain commands
`>` - output redirection symbol, overwrites a file
`>>` - appends to the end of the file
`$` - contents of a variable
## Linux Directory Structure
- `bin` - contains application binary files, everything that's installed on the system
- `boot` - system files related to booting
- `etc` - contains config files
	- `passwd` - contains a list of users + some details
	- `shadow` - contains a list of users + password info (hashes)
	- `group` - contains info about different groups
	- `/ssh/sshd_config` - contains the SSH configuration when you have openSSH installed
- `var` - contains things prone to change
	- `tmp` - contains temporary files
	- `log` - contains all the logs related to your system
		- `syslog` - log file that your system updates with new logs (rotated periodically)
		- `auth.log` - log file that contains information about authentication
- `home` - contains all the users
	- `/user/.bashrc` contains shell config for that user, can use to make aliases
- `root` - contains the root user
#### Permission Strings

r = 4 (2^2)
w = 2 (2^1)
x = 1 (2^0)

![linux file strings](https://phoenixnap.com/kb/wp-content/uploads/2021/04/file-permission-syntax-explained.jpg))