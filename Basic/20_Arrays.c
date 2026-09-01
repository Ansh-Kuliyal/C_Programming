#include <stdio.h>

int main(){

    // array = a fixed-size collection of elements of the same data type
    //         (Similiar to a variable, but it holds more than one value)

    int numbers[] = {1,2,3,4,5};
    char grades[] = {'A','B','C','D'};
    char name[] = "Hello Friends";

    int size = sizeof(numbers) / sizeof(numbers[0]);

    for(int i = 0; i < size; i++){
        printf("%d ",numbers[i]);
    }

    return 0;
}