#include <stdio.h>

/*

count_positives_negatives: Write a program that takes a series of integers from the user and counts how many of them are positive and how many are negative. Use a while loop to continue input until a sentinel value (like 0) is entered.

*/

int main() {
    // Write C code here
    
    int num;
    int posNum = 0;
    int negNum = 0;
    
    while(1){
        printf("Enter a number: ");
        scanf("%d", &num);
        
        if(num > 0){
            posNum++;
        }
        else if(num > 0){
            negNum++;
        }
        
        if(num == 0){
            break;
        }
    }
    
    printf("\nPositive numbers: %d", posNum);
    printf("\nNegative numbers: %d", negNum);

    return 0;
}
