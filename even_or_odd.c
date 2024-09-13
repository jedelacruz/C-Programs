/*

even_or_odd: Write a program that checks whether a given integer is even or odd.

*/
#include <stdio.h>

int main() {
    // Write C code here
    
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if(num % 2 == 0){
        printf("%d is an even number", num);
    }
    else{
        printf("%d is an odd number", num);
    }
    
   
    return 0;
}
