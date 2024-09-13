/*

factorial_calculation: Write a program that calculates the factorial of a given positive integer using a loop.

*/
#include <stdio.h>

int main() {
    // Write C code here
    
    int num;
    int factorial = 1;
    
   printf("Enter a number: ");
   scanf("%d", &num);
   
   for(int i = 1; i <= num; i++){
       factorial *= i;
   }
   
   printf("The factorial of %d is %d\n", num, factorial);
   
    return 0;
}
