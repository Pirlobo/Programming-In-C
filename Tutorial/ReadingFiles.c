#include <stdio.h>
#include <errno.h>
#include <string.h>

int main() {
    FILE *filePointer ;
    filePointer = fopen("created.txt", "r");
    
    char singLine[150];
    // keep reading till the end of the file
    while (!feof(filePointer)) {
        fgets(singLine, 150, filePointer);
        puts(singLine);
    }
    fclose(filePointer);

    return 0;
}