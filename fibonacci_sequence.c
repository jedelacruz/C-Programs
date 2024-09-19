// solving the fibonacci sequence

#include <stdio.h>

int main() {
    
    int enterSeq;
    int num1 = 0, num2 = 1;
    int numInc;
    int totNum = 1;
    
    printf("enter how many sequence? ");
    scanf("%d", & enterSeq);
    
    totNum = num1 + num2 + 1;
    
    for(int i = 0; i < enterSeq; i++){
        numInc = num1 + num2;
        totNum += numInc;
        
        num1 = num2;
        num2 = numInc;
        printf("\n%d", numInc);
    }
    
    printf("\nthe total number is %d", totNum);

    return 0;
}
