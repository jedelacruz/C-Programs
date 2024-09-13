/*

largest_of_three: Write a program that takes three integers as input and determines the largest of the three.

*/
#include <stdio.h>

int main() {
    // Write C code here
    
    int fnum,snum,tnum;
    
    printf("Enter first number: ");
    scanf("%d", &fnum);
    
    printf("Enter second number: ");
    scanf("%d", &snum);
    
    printf("Enter third number: ");
    scanf("%d", &tnum);
    
    if(fnum >= snum && fnum >= tnum){
        printf("First number is the largest number: %d", fnum);
    }
    else if(snum >= fnum && snum >= tnum){
        printf("Second number is the largest number: %d", snum);
    }
    else if(tnum >= fnum && tnum >= snum){
        printf("Third number is the largest number: %d", tnum);
    }
    
   
    
   
    return 0;
}
