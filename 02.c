#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char const *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Invoke with the name of the dir you want to backup\n");
        exit(2);
    }

    char const *backup_dir = "bckup";

    execlp("cp", "cp", "-r", argv[1], backup_dir, NULL );
    
    return 0;
}
