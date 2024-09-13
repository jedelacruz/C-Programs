#include <stdio.h>

/*

temperature_conversion: Write a program that converts a temperature from Celsius to Fahrenheit and vice versa based on user input.
*/

int main() {
    
    int choice, temp;
    float ftoc, ctof;

    printf("Convert Temperature\n\n");
    printf("Enter the temperature: ");
    scanf("%d", &temp);
    
    while(1){
        printf("\n1. Fahrenheit to Celsius\n2. Celsius to Fahrenheit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        
        if (choice == 1) {
            ftoc = (5.0 / 9.0) * (temp - 32);  
            printf("\nTemperature in Celsius: %.2f\n", ftoc);
            break;
        } else if (choice == 2) {
            ctof = (9.0 / 5.0) * temp + 32; 
            printf("\nTemperature in Fahrenheit: %.2f\n", ctof);
            break;
        } else {
            printf("\nInvalid choice.\n");
        }
    }
    

    return 0;
}
