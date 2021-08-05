
#include <stdio.h>
#include <errno.h>
#include <string.h>

// void main() {

//    int dividend = 20;
//    int divisor = 0;
//    int quotient;
 
//    if( divisor == 0){
//       // Second important point to note is that you should use stderr file stream to output all the errors.
//       fprintf(stderr, "Division by zero! Exiting...\n");
//       // If you have an error condition in your program and you are coming out then you should exit with a status EXIT_FAILURE 
//       // which is defined as -1. So let's write above program as follows −
//       exit(-1);
//    }
   
//    quotient = dividend / divisor;
//    fprintf(stderr, "Value of quotient : %d\n", quotient );

//    exit(0);
// }

extern int errno ;

int main () {

   FILE * pf;
   int errnum;
   pf = fopen ("unexist.txt", "rb");
	
   if (pf == NULL) {
   
      errnum = errno;
      fprintf(stderr, "Value of errno: %d\n", errno);
      perror("Error printed by perror");
      fprintf(stderr, "Error opening file: %s\n", strerror( errnum ));
   } else {
   
      fclose (pf);
   }
   
   return 0;
}