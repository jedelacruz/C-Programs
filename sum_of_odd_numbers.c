#include <stdio.h>

/*

sum_of_odd_numbers: Write a program that calculates the sum of all odd numbers.

*/

int main() {
    // Write C code here
    int num;
    int oddNum = 0;
    
   while(1){
       printf("Enter a number: ");
       scanf("%d", &num);
       
       if(num == 0){
           break;
       }
       
       if(num % 2 != 0){
           oddNum += num;
       }
   }
   
   printf("%d is the total amount of odd number.", oddNum);
    
    

    return 0;
}
