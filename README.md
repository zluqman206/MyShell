Navigate to the project directory:

bash
Copy
cd your-repo-name
Compile the MyShell.c file:
## Features

- Supports executing built-in shell commands and external programs.
- Implements process management using `fork()` and `execvp()`.
- Handles basic input and output redirection.
- Supports command chaining using pipes (`|`).
- Provides a basic interactive shell experience.

## Requirements

To compile and run MyShell.c, you need:

- GCC compiler (`gcc`)
- A Unix-like operating system (Linux, macOS, or WSL on Windows)

## Installation

1. Clone the project repository or copy `MyShell.c` to your working directory.
2. Open a terminal and navigate to the directory containing `MyShell.c`.
3. Compile the shell using:
   ```bash
   gcc -o myShell MyShell.c
   ```
4. Run the shell with:
   ```bash
   ./myShell
   ```

## Usage

Once inside the shell, you can execute commands like:

```bash
ls -l
```

or use redirection and pipes:

```bash
ls -l | grep .c > output.txt
```

To exit the shell, type:

```bash
exit
```

## Built-in Commands

- `cd <directory>`: Change the current directory.
- `exit`: Terminate the shell.

## Implementation Details

- Uses `fork()` to create child processes for command execution.
- Uses `execvp()` to replace the child process with the requested command.
- Implements simple input and output redirection using `dup2()`.
- Supports piping using `pipe()` to link commands together.

## Limitations

- Does not support advanced shell features like background execution (`&`).
- Limited error handling for incorrect syntax.
- No support for shell scripting.

## Future Improvements

- Implement background process execution.
- Improve error handling and command parsing.
- Add support for shell scripting.

## Authors

Developed as part of the TCSS 462/562 Cloud Computing Term Project.

## License

This project is for educational purposes only.


