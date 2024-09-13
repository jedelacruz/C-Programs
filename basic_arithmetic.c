/*

basic_arithmetic: Write a program that takes two integers as input and performs addition, subtraction, multiplication, and division on them. Display the results.

*/
#include <stdio.h>

int main() {
    // Write C code here
    
    int firstNum,secondNum;
    
    printf("Enter first number: ");
    scanf("%d", &firstNum);
    
    printf("Enter second number: ");
    scanf("%d", &secondNum);
    
    int sum = firstNum + secondNum;
    int difference = firstNum - secondNum;
    int product = firstNum * secondNum;
    int quotient = firstNum / secondNum;
    
    printf("\nSum is %d", sum);
    printf("\nDifference is %d", difference);
    printf("\nProduct is %d", product);
    printf("\nQuotient is %d", quotient);

    return 0;
}
