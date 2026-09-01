#include <stdio.h>
#include <string.h>

int main()
{

    // Array of Strings

    /*   char fruits[][10] = {{"Apple"},
                            {"Banana"},
                            {"Coconut"}};
       int size = sizeof(fruits) / sizeof(fruits[0]);

       fruits[0][0] = 'e';
       fruits[0][4] = 'A';

       fruits[1][0] = 'a';
       fruits[1][5] = 'B';

       fruits[2][0] = 't';
       fruits[2][6] = 'C';

       for (int i = 0; i < size; i++)
       {
           printf("%s\n", fruits[i]);
       } */

    // EXERCISE

    char names[4][25] = {0};
    int size = sizeof(names) / sizeof(names[0]);

    for (int i = 0; i < size; i++)
    {
        printf("Enter a name: ");
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strlen(names[i]) - 1] = '\0';
    }

    for (int i = 0; i < size; i++)
    {
        printf("%s\n", names[i]);
    }

    /* printf("Enter a name: ");
       fgets(names[1],sizeof(names[1]),stdin);
       names[1][strlen(names[1]) - 1] = '\0';

       printf("Enter a name: ");
       fgets(names[2],sizeof(names[2]),stdin);
       names[2][strlen(names[2]) - 1] = '\0';

       printf("%s\n",names[0]);
       printf("%s\n",names[1]);
       printf("%s\n",names[2]); */

    return 0;
}
