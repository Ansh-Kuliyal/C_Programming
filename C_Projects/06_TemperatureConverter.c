#include <stdio.h>

int main(){
    // TEMPERATURE CONVERSION PROGRAM

    char choice = '\0';
    double celsius = 0.0f;
    double fahrenheit = 0.0f;

    printf("Temperature Coverter\n");
    printf("C.Celsius to Fahrenheit\n");
    printf("F.Fahrenheit to Celsius\n");
    printf("Enter your choice (C or F): ");
    scanf("%c",&choice);
    if(choice == 'C'){
        printf("Enter the temperature in Celsius: ");
        scanf("%lf",&celsius);
        fahrenheit = (9.0/5.0) * celsius + 32;
        printf ("%.2lf celsius is equal to %.2lf fahrenheit",celsius,fahrenheit);


    }
    else if(choice == 'F'){
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%lf",&fahrenheit);
        celsius = (fahrenheit - 32) * (5.0/9.0);
        printf ("%.2lf fahrenheit is equal to %.2lf celsius",fahrenheit,celsius);

    }
    else {
        printf("Invaild choice! Please select C or F\n");
    }
    return 0;
}