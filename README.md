MyShell.c - Simple Linux Shell Implementation

Overview

MyShell.c is a simple Linux shell implemented in C that provides a basic command-line interface for executing user commands. This project is part of the TCSS 422 Operating Systems coursework.

Features

Displays a MyShell> prompt for user input.

Accepts and executes user commands using execvp().

Implements process creation using fork() and manages execution with wait().

Handles empty commands gracefully.

Allows users to exit the shell using the exit command.

Requirements

To compile and run MyShell.c, you need:

GCC compiler (version 9.4.0 or later)

Ubuntu Linux environment

Installation

Clone the project repository or copy MyShell.c to your working directory.

Open a terminal and navigate to the directory containing MyShell.c.

Compile the shell using:

gcc -o myShell MyShell.c

Run the shell with:

./myShell

Usage

Once inside the shell, you can execute commands like:

ls -l

To exit the shell, type:

exit

Implementation Details

Uses fork() to create child processes for command execution.

Uses execvp() to replace the child process with the requested command.

Ensures the parent process waits for the child to finish execution using wait().

Displays MyShell> prompt after each command execution.

Limitations

No support for piping (|) or redirection (>, <).

Limited error handling for incorrect command syntax.

Does not support changing directories (cd).

Future Improvements

Implement support for background process execution (&).

Improve error handling and provide better debugging messages.

Add support for command history and tab completion.

License

This project is licensed under the MIT License.
