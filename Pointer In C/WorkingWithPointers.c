#include <stdio.h>

int main() {
    int a = 10;
    int *p;
    p = &a;

    // print out the adress of a
    printf("%d\n", p);
    // each int contains 4 bytes
    printf("Size of integer is %d bytes\n", sizeof(int));
    // we are trying to print out the adress of a + 4
    printf("%d\n", p + 1); 
    // get the value from the adress (*p)
    printf("%d\n", *p); 
}