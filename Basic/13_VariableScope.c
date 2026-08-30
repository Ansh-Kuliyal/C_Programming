#include <stdio.h>

int add(int x, int y){
    int result = x + y;
    return result;
}

int main(){

    // variable scope = Refers to where a variable is recognized and accesible.
    //                  variable can share the same name if
    //                  they are in different scope {}

    int result = add(3,4);

    printf("%d",result);

    return 0;
}