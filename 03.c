#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
	int seconds = 5;

	printf("Ready to fork...\n");
	pid_t pid = fork();
	if (pid < 0) {
		fprintf(stderr, "Error while forking\n");
		exit(1);
	}
	printf("Forked!\n");

	if (pid != 0) {
		printf("Father waiting for child (PID: %d) to finish\n", pid);

		wait(NULL);

		printf("Father finished waiting, child exited.\n");
		printf("Now I'll list some files. See ya!\n");

		execlp("ls", "ls", "-l", NULL);
	}
	else {
		printf("Child (PID: %d) will sleep for %d seconds\n", getpid(), seconds);
		sleep(seconds);
		exit(0);
	}

	printf("This should not execute, as the exec repaces the father process and the child already exits\n");    
	return 0;
}
