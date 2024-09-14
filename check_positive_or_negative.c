#include <stdio.h>

/*

check_positive_or_negative: Write a program that checks if a given integer is positive, negative, or zero.

*/

int main() {
    // Write C code here
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if(num > 0){
        printf("%d is a positive number", num);
    }
    else if(num == 0){
        printf("%d is a 0", num);
    }
    else{
        printf("%d is a negative number", num);
    }
    
    

    return 0;
}
