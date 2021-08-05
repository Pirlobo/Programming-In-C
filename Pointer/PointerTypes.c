#include <stdio.h>
int main()
{
    int a = 1025;
    int *p;
    p = &a;
    printf("The size of integer is %d bytes\n", sizeof(int));
    printf("Adress = %d, Value = %d\n", p, *p);
    // dereferencing
    printf("Adress = %d, Value = %d\n", p + 1, *(p + 1));

    char *p0; 
    p0 = (char *)p;
    printf("The size of character is %d bytes\n", sizeof(char));
    printf("Adress = %d, Value = %d\n", p0, *p0);
    // dereferencing
    printf("Adress = %d, Value = %d\n", p0 + 1, *(p0+1));
    // 1025 = 0      +        0   + 1024        1
    // 1025 = 00000000 00000000 00000100 00000001

    // Void Pointer - Generic Pointer (the pointer does not belong to any data types)
    void *gPointer;
    gPointer = p;
    // generic pointer can not erform pointer arimetic or deferencing
    printf("%p\n", gPointer);
}
