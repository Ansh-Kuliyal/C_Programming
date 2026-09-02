#include <stdio.h>

typedef char string[50];
typedef char initial[4];

int main(){

    // typedef = reserved keyword that gives an existing datatype a "nickname"
    //           Helps simplify complex types and improves code readability

    //           typedef existing_type new_name;

   /* string name = "Steven";
    
    printf("%s",name);  */

    initial user1 = "AK";
    initial user2 = "AR";
    initial user3 = "SP";
    initial user4 = "AM";

    printf("%s\n",user1);
    printf("%s\n",user2);
    printf("%s\n",user3);
    printf("%s\n",user4);

    return 0;
}