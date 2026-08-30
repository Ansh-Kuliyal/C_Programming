#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    // Pseudo-random = appear random but are determined by a mathematical formula
    //                 that uses a seed value to generate a predictable sequence of numbers.
    //                 advanced: Mersenne Twister or /dev/random

    srand(time(NULL));
    printf("Random number: %d\n", rand());

    int randomNum = rand() % 2;
    printf("Number: %d\n", randomNum);

    int min = 50;
    int max = 100;

    // Pseudo-random number between min and max
    // formula = (rand() % (max - min + 1)) + min

    int randomNum1 = (rand() % (max - min + 1)) + min;
    int randomNum2 = (rand() % (max - min + 1)) + min;
    int randomNum3 = (rand() % (max - min + 1)) + min;

    printf("%d %d %d\n", randomNum1, randomNum2, randomNum3);
    
    
    return 0;
}
