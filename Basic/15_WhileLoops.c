#include <stdio.h>

int main(){

    // while-loop = continue some code WHILE the condition remains true
    //              Condition must be true for us to enter while loop

    int number = 0;
    printf("Enter a number: ");
    scanf("%d",&number);

    while(number <= 0){
        printf("Enter a number greater than 0: ");
        scanf("%d",&number);
    }

    return 0;
}