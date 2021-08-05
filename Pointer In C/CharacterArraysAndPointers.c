#include <stdio.h>
#include <string.h>

void printChar(char *C) {
    // modifying the first char in the string
    C[0] = 'H';
    while (*C != '\0') {
        printf("%c", *C);
        C++;
    }
    printf("\n");
}

int main(){
    // to store a string in C, the size of char array >= the number of characters in the string + 1
    char C[20] = "JOHN";
    // passing the base adress of the string
    printChar(C);
    int size = strlen(C);
    printf("Size in bytes %d\n", sizeof(C));
    printf("%d\n", size);
    printf("%s", C);
}