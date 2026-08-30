#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    // NUMBER GUESSING GAME

    srand(time(NULL)); 
    int guess = 0;
    int tries = 0;
    int min = 1;
    int max = 100;
    int answer = (rand() % (max - min + 1))+ min;
    
    printf("***NUMBER GUESSING GAME***\n");

    do{
        printf("Guess a number between %d and %d: ",min,max);
        scanf("%d",&guess);
        tries++;
        if(guess < answer){
            printf("TOO LOW.\n");
        }
        else if(guess > answer){
            printf("TOO HIGH.\n");
        }
        else{
            printf("CORRECT!\n");
        }

    }while(guess != answer);

    printf("The answer is %d\n",answer);
    printf("It took you %d tries",tries);


    return 0;
}