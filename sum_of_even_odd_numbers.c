/*

Write a C program to find the sum of all even and odd numbers between N and a given number N.

*/
#include <stdio.h>

int main() {
    int evenNum = 0, oddNum = 0;
    int startNum, endNum, i;
    
    printf("Enter the starting number: ");
    scanf("%d", &startNum);
    
    printf("Enter the ending number: ");
    scanf("%d", &endNum);
    
    for(i = startNum; i <= endNum; i++){

        if(i %2 == 0){
            evenNum += i;
        }
        else{
            oddNum += i;
        }
    }
    
    printf("the sum of all even numbers is %d", evenNum);
    printf("the sum of all odd numbers is %d", oddNum);

    return 0;
}
