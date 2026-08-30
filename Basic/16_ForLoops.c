#include <stdio.h>
#include <windows.h>

int main(){

    // for loop = repeat some code a limited amount of times 
    //            for(Initialization;Condition;Update)

    for(int i = 10; i >= 0; i--){
        Sleep(1000);
        printf("%d\n",i);
    }
    
    printf("HAPPY NEW YEAR!");

    return 0;
}