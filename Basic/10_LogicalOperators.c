#include <stdio.h>

int main(){
    // logical operators = used to combine or modify boolean expression

    // && = AND
    // || = OR
    // ! = NOT

    int temp = 100000;

    if(temp > 0 && temp < 30){
        printf("The temperature is GOOD");
    }
    else{
        printf("The temperature is BAD");
    }

}