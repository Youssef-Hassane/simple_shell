# Simple Shell

This repository contains a simple UNIX command line interpreter, often referred to as a shell. The objective of this project is to create a basic shell that mimics the behavior of the /bin/sh shell. The shell is designed to handle simple command lines with or without arguments and provide a prompt for user input.

![Youssef Hassane](https://github.com/Youssef-Hassane/simple_shell/blob/main/Images/Untitled%20Diagram.drawio_2.png)
## Task 0 (Betty would be proud)

- Write a beautiful code that passes the Betty checks

## Task 1 (Simple shell 0.1)
- Write a UNIX command line interpreter.

	- Usage: simple_shell

- Your Shell should:

	- Display a prompt and wait for the user to type a command. A command line always ends with a new line.
	- The prompt is displayed again each time a command has been executed.
	- The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.
	- The command lines are made only of one word. No arguments will be passed to programs.
	- If an executable cannot be found, print an error message and display the prompt again.
	- Handle errors.
	- You have to handle the “end of file” condition (Ctrl+D)

- You don’t have to:

	- use the PATH
	- implement built-ins
	- handle special characters : ", ', `, \, *, &, #
	- be able to move the cursor
	- handle commands with arguments

- execve will be the core part of your Shell, don’t forget to pass the environ to it…

## Task 2 (Simple shell 0.2)
- Simple shell 0.1 +

	- Handle command lines with arguments

## Task 3 (Simple shell 0.3)

- Handle the PATH

	- fork must not be called if the command doesn’t exist

	```
	julien@ubuntu:~/shell$ ./shell_0.3
	:) /bin/ls
	barbie_j       env-main.c  exec.c  fork.c  pid.c  ppid.c    prompt   prompt.c  shell_0.3  stat    test_scripting.sh  wait.c
	env-environ.c  exec    fork    mypid   ppid   printenv  promptc  shell     shell.c    stat.c  wait
	:) ls
	barbie_j       env-main.c  exec.c  fork.c  pid.c  ppid.c    prompt   prompt.c  shell_0.3  stat    test_scripting.sh  wait.c
	env-environ.c  exec    fork    mypid   ppid   printenv  promptc  shell     shell.c    stat.c  wait
	:) ls -l /tmp 
	total 20
	-rw------- 1 julien julien    0 Dec  5 12:09 config-err-aAMZrR
	drwx------ 3 root   root   4096 Dec  5 12:09 systemd-private-062a0eca7f2a44349733e78cb4abdff4-colord.service-V7DUzr
	drwx------ 3 root   root   4096 Dec  5 12:09 systemd-private-062a0eca7f2a44349733e78cb4abdff4-rtkit-daemon.service-ANGvoV
	drwx------ 3 root   root   4096 Dec  5 12:07 systemd-private-062a0eca7f2a44349733e78cb4abdff4-systemd-timesyncd.service-CdXUtH
	-rw-rw-r-- 1 julien julien    0 Dec  5 12:09 unity_support_test.0
	:) ^C
	julien@ubuntu:~/shell$ 
	```
## Task 4 (Simple shell 0.4)
- Simple shell 0.3 +

	- Implement the exit built-in, that exits the shell
	- Usage: exit
	- You don’t have to handle any argument to the built-in exit


## Task 5 (Simple shell 1.0)

- Simple shell 0.4 +

	- Implement the env built-in, that prints the current environment
	```
	julien@ubuntu:~/shell$ ./simple_shell
	$ env
	USER=julien
	LANGUAGE=en_US
	SESSION=ubuntu
	COMPIZ_CONFIG_PROFILE=ubuntu
	SHLVL=1
	HOME=/home/julien
	C_IS=Fun_:)
	DESKTOP_SESSION=ubuntu
	LOGNAME=julien
	TERM=xterm-256color
	PATH=/home/julien/bin:/home/julien/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin
	DISPLAY=:0
	$ exit
	julien@ubuntu:~/shell$ 
	```

## Task 6 (Simple shell 0.1.1)

- Simple shell 0.1 +

	- Write your own getline function
	- Use a buffer to read many chars at once and call the least possible the read system call
	- You will need to use static variables
	- You are not allowed to use getline

- You don’t have to:

	-be able to move the cursor

## Task 7 (Simple shell 0.2.1)

- Simple shell 0.2 +

	- You are not allowed to use strtok

## Task 8 (Simple shell 0.4.1)

- Simple shell 0.4 +

	- handle arguments for the built-in exit
	- Usage: exit status, where status is an integer used to exit the shell
	```
	julien@ubuntu:~/shell$ ./shell_0.4.1
	$ exit 98
	julien@ubuntu:~/shell$ echo $?
	98
	julien@ubuntu:~/shell$ 
	```
## Task 9 (setenv, unsetenv)

- Simple shell 1.0 +

- Implement the setenv and unsetenv builtin commands

	- setenv
		- Initialize a new environment variable, or modify an existing one
		- Command syntax: setenv VARIABLE VALUE
		- Should print something on stderr on failure

	- unsetenv
		- Remove an environment variable
		- Command syntax: unsetenv VARIABLE
		- Should print something on stderr on failure

## Task 15 (Comments)

- Simple shell 1.0 +

	- Handle comments (#)
	```
	julien@ubuntu:~/shell$ sh
	$ echo $$ # ls -la
	5114
	$ exit
	julien@ubuntu:~/shell$ 
	```





## Developers:

| **Youssef Hassane (AKA Almasy)** | **Ahmed Abdelhamid (AKA 7medo)** |
|---|---|
| ![Youssef Hassane](https://github.com/Youssef-Hassane/Screenshot/blob/main/Cropped_Image2-fotor-202311111348.png) | ![Ahmed Abdelhamid](https://github.com/Youssef-Hassane/Screenshot/blob/main/Screenshot%202023-11-11%20at%2012.42.16%20AM-fotor-2023111104736.png) |
| Youssef Hassane is a software engineer with a passion for building innovative and user-friendly web applications. He is currently a freelancer working on Upwork, where he is involved in a variety of projects. Youssef's goal is to become a world-class software engineer and make a positive impact on the world through his work. He is passionate about using technology to solve real-world problems and is always looking for new ways to use his skills to make a difference. | Ahmed Abdelhamid is a driven and ambitious student with a passion for problem-solving and creating software that solves real-world problems. He is always eager to learn new things and is always up for a challenge. He is a graduate from dental school and has a passion for creating software that creates a meaningful impact on users. During his internship year, Ahmed managed to learn HTML, CSS, and JavaScript and created a number of projects on the side while working as an intern dentist. |

