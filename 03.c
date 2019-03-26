#include <stdio.h>
#include <process.h>
#include <time.h>

void sleep(int s) {
    time_t now = time(NULL);
    time_t goal = now + s;

    while( (now = time(NULL)) < goal ){}
    
}

int main(int argc, char const *argv[]) {
    
}
