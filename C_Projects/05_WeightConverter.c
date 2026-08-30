#include <stdio.h>

int main()
{
    // WEIGHT CONVERTER PROGRAM

    int choice = 0;
    float pounds = 0.0f;
    float kilogram = 0.0f;

    printf("Weight Conversion Calculator\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d",&choice);
    if(choice == 1){
        // Kilogram to Pounds
        printf("Enter the weight in Kilograms: ");
        scanf("%f",&kilogram);
        pounds = kilogram * 2.20462;
        printf("%.2f kilograms is equal to %.2f pounds\n",kilogram,pounds);

    }
    else if(choice == 2){
        // Pounds to Kilogram
         printf("Enter the weight in Pounds: ");
        scanf("%f",&pounds);
        kilogram = pounds / 2.20462;
        printf("%.2f pounds is equal to %.2f kilograms\n",pounds,kilogram);

    }
    else{
        printf("Invaild choice! Please enter 1 or 2\n");
    }

    return 0;
}
