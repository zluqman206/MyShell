#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#define MAXSTR 255


/**
  @brief Fork a child to execute the command using execvp. The parent should wait for the child to terminate
  @param args Null terminated list of arguments (including program).
  @return returns 1, to continue execution and 0 to terminate the MyShell prompt.
 */
int execute(char **args)
{
	
    	if (args[0] == NULL) { // Empty command
        	return 1;
    	}

    	if (strcmp(args[0], "exit") == 0) { // Exit command
    	    return 0;
    	}

    	pid_t pid = fork();
    	if (pid < 0) { // Fork failed
    		perror("Fork failed");
            	return 1;
    	} 
    	else if (pid == 0) { // Child process
        	if (execvp(args[0], args) == -1) {
        		perror("Exec failed");
        	}
        	exit(EXIT_FAILURE);
    	} 
    	else { // Parent process
    		int status;
        	waitpid(pid, &status, 0);
    	}

    	return 1; 
}


/**
  @brief gets the input from the prompt and splits it into tokens. Prepares the arguments for execvp
  @return returns char** args to be used by execvp
 */
char** parse(void)
{
	char** args = malloc(sizeof(char*) * 7);
	char cmd[MAXSTR];

	printf("MyShell>");
        fgets(cmd, MAXSTR, stdin);	
       
	
	 
        char* token;
	const char* delim = " ";

	token = strtok(cmd, delim);
	int i = 0;
	while (token != NULL) {
		args[i] = token;
		i++;
		token = strtok(NULL, delim);
	}
	
	args[i] = NULL;

	for (int j = 0; j < 4; j++) {
		printf("%s\n", args[j]);
	}
	int c = 0;
	while (args[0][c] != '\0') {
		printf("%c\n", args[0][c]
		
	return args;
			
}


/**
   @brief Main function should run infinitely until terminated manually using CTRL+C or typing in the exit command
   It should call the parse() and execute() functions
   @param argc Argument count.
   @param argv Argument vector.
   @return status code
 */
int main(int argc, char **argv)
{

        int i = 0;
		
	char** theArgs;
	int status;
	
	while(status) {
		theArgs = parse();
        	if (theArgs == NULL) {
        		continue;
        	}
        	status = execute(theArgs);
        	free(theArgs); 
	}
   	return EXIT_SUCCESS;
}
