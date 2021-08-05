#include <stdio.h>
int sumOfElemets(int* a, int size ) {
    int sum = 0;
    for (  int i = 0; i < size; i++) {
        sum += a[i]; // a[i] is * (a + i)
    }
    return sum;
}
void Double(int a[], int size) {
    for (int i = 0; i < size; i++) {
        a[i] = 2*a[i];
    }
}
int main()
{
   int a[] = {1,2,3,4,5};
   int size = (sizeof(a)/ sizeof(int));
   // passing the adress of the first element in the array
   int sum = sumOfElemets(a, size);
   printf("Sum is %d\n", sum);
   Double(a, size);
   printf("Doubled the array : ");
   for (int i = 0; i < size; i++) {
        printf("%d", a[i]);
        printf(" ");
    }

}
