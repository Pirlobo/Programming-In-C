#include <stdio.h>

// define a function
int add(int, int);

// implement the function
int sum(int x, int y) {
    return x + y;
}

int main () {
    int x = 10, y = 30;
    int total = sum(x, y);
    printf ("sum is %d\n", total);
}