/*

simple_calculator: Create a basic calculator program that allows the user to perform addition, subtraction, multiplication, or division based on user input.

*/
#include <stdio.h>

int main() {
    // Write C code here
    
    int fnum,snum,op;
    
    printf("Enter first number: ");
    scanf("%d", &fnum);
    
    printf("Enter second number: ");
    scanf("%d", &snum);
    
    printf("What operation would you like to use?\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulus\n");
    scanf("\n%d", &op);
    
    int sum = fnum + snum;
    int diff = fnum - snum;
    int prod = fnum * snum;
    int quo = fnum / snum;
    int mod = fnum % snum;
    
    if(op == 1){
        printf("Sum: %d", sum);
    }
    else if(op == 2){
        printf("Difference: %d", diff);
    }
    else if(op == 3){
        printf("Product: %d", prod);
    }
    else if(op == 4){
        printf("Quotient: %d", quo);
    }
    else if(op == 5){
        printf("Remainder: %d", mod);
    }
   
    return 0;
}
