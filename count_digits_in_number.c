/*

Write a C program to count the number of digits in a given integer.

*/
#include <stdio.h>

int main() {
    
    int count = 0, num, enterNum;
    
    printf("Enter a number: ");
    scanf("%d", &enterNum);
    
    num = enterNum;
    
    while( num != 0){
        
        count++;
        num /= 10;
    }
    
    printf("%d has %d digits", enterNum, count);

    return 0;
}
