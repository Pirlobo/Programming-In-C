#include <stdio.h>
#include <errno.h>
#include <string.h>

void main() {
    FILE *filePointer ;
    filePointer = fopen("created.txt", "w");
    fprintf(filePointer, "I have just created you !!! Thanks me now.");
    fclose(filePointer);
}