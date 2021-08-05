#include <stdio.h>
int main()
{
   int a[] = {1,2,3,4,5};
   for (size_t i = 0; i < (sizeof(a)/ sizeof(int)); i++)
   {
       printf("Adress : %d\n", &a[i]);
       printf("Adress : %d\n", a + i);
       printf("Value : %d\n", a[i]);
       printf("Value : %d\n", * (a + i));
       printf("Value : %d\n", * (&a[i]));
   }
   
}

