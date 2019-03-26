#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void trim_newline(char *str) {
	char *ptr;
    for(ptr = str; *ptr != '\0'; ptr++) {
        if (*ptr == '\n') {
            *ptr = '\0';
            break;
        }
    }
}

int main(int argc, char *argv[]) {
    char command[1024];
    char arg1[1024];
    char arg2[1024];
    char *args[4] = {command, arg1, arg2, NULL};

    printf("Give me a command: ");
    fgets(command, 1024, stdin);
    trim_newline(command);

    printf("Give a command line argument: ");
    fgets(arg1, 1024, stdin);
    trim_newline(arg1);

    printf("Give me a second command line argument: ");
    fgets(arg2, 1024, stdin);
    trim_newline(arg2);

    
    execvp(args[0], (char * const*)args);

    return 0;
}
