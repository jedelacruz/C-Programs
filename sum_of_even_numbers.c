#include <stdio.h>

/*

sum_of_even_numbers: Write a program that calculates the sum of all even numbers.

*/

int main() {
    // Write C code here
    int num;
    int eveNum = 0;
    
   while(1){
       printf("Enter a number: ");
       scanf("%d", &num);
       
       if(num == 0){
           break;
       }
       
       if(num % 2 == 0){
           eveNum += num;
       }
   }
   
   printf("%d is the total amount of even number.", eveNum);
    
    

    return 0;
}
