#include <stdio.h>
#include <string.h>

void happyBirthday(char name[],int age){
    printf("Happy Birthday to You!\n");
    printf("Happy Birthday to You!\n");
    printf("Happy Birthday to dear %s\n",name);
    printf("You are %d years old\n",age);
}
int main(){

    // functions = a reusable section of code that can be invoked "called"
    //             Arrangements can be sent to a function so that it can use them

    char name[50] = "";
    int age = 0;

    printf("Enter the name: ");
    fgets(name,sizeof(name),stdin);
    name[strlen(name) - 1] = '\0';

    printf("Enter your age: ");
    scanf("%d",&age);

    happyBirthday(name,age);

    return 0;
}