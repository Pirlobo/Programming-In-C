#include <stdio.h>
#define f(p) p*p + 2

typedef int integer;
typedef float decimals;

struct book{
    int x;
};

typedef struct book books;

void main() {
    integer i = 10;
    decimals d = 3.14;
    books book1;
    book1.x = 15;
    printf("%d\n", i);
    printf("%.2f\n", d);
    printf("%d\n", f(3));
    printf("%d\n", book1.x);
}

