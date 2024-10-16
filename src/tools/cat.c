/**
 * The cat command of linux but not in linux 
 */

#include <stdio.h>

FILE *fptr;

int main(int argc, char* argv[]) {
    if(argc < 2) {
        printf("Error concerning usage: cat <file>");
        return -1;
    }

    fptr = fopen(argv[1], "r");

    char line[1024];

    while(fgets(line, 1024, fptr) != NULL) {
        printf("%s", line);
    }

}