/*

 Write a C program to find the maximum of two given integers using conditional statements.

*/
#include <stdio.h>

int main() {
    
  int num1,num2;
  
  printf("enter number1: ");
  scanf("%d", &num1);

    printf("enter number2: ");
  scanf("%d", &num2);
  
  if(num1 > num2){
      printf("%d is greater than %d", num1,num2);
  }
  
  else if(num2 > num1){
      printf("%d is greater than %d", num2,num1);
  }
  
  else{
      printf("%d is equal to %d", num1,num2);
  }
    return 0;
}
