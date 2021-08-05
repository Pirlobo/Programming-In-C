#include <stdio.h>
// there are 4 types of storage classes
// 1. Auto (default valye) , the variable is stored in stack memory
// 2. Extern, the variable is stored in data segment memory
// 3. Static, the variable is stored in data segment memory
// 4. Register, the variable is stored in CPU Register (quickly accessible location) for faster access

// what is data segment in C ? 
// A data segment is a portion of the virtual address space of a program, 
//which contains the global variables and static variables that are initialized by the programmer

// Static Keyword (variable will be stored in data segment)
int fun () {
    // With static keywords, the variable will be initilized only one time, 
    // and present till the end of the program
    static int count = 0;
    count++;
    return count;
}

// Extern Keyword

// This program will throw an err because var is declared, meaning that no adress associated with the var
// when initilizing var = 10, the program will search for an adress to initilize, but it does not exist

// extern int var;
// int main () {
//     var = 10;
//     return 0;
// }


// This programm will be compiled because the var is aready defined in somewhere
// #include <somefile.h>
// extern int var;
// int main () {
//     var = 10;
//     return 0;
// }


int main() {
    printf("%d\n", fun());
    // second initialization will be skipped
    printf("%d\n", fun());   
}