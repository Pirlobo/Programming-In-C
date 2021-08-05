#include <stdio.h>
void increment (int *p) {
    *p += 1;
}
int main()
{
   int a = 10;
   // calling function by reference
   increment(&a);
   printf("Value of a is %d", a);
}
