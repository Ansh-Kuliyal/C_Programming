#include <stdio.h>
#include <stdbool.h>

int main(){

    float price = 10.00;
    bool isStudent = true; // 10% discount
    bool isSenior = true;   // 20% discount

    // student = $9
    // senior = $8
    // student + senior = $7

    if(isStudent){
        if(isSenior){
            printf("You get a student discount 10 percent.\n");
            printf("You get a senior discount of 20 percent.\n");
            price *= 0.7;
        }
        else{
            printf("You get a student discount of 10 percent.\n");
            price = price * 0.9;
        }
    }
    else {
        if(isSenior){
            printf("You get a senior discount of 20 percent.\n");
            price = price * 0.8;
        }
    }

    printf("The price of the ticket is: $%.2f\n",price);
    
    return 0;
}