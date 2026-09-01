#include <stdio.h>

int main()
{

    // 2D array = An array where each element is array
    //            array[][] = {{}, {}, {}}

    int numbers[][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    /*printf("%d ",numbers[0][0]);
    printf("%d ",numbers[0][1]);
    printf("%d\n",numbers[0][2]);

    printf("%d ",numbers[1][0]);
    printf("%d ",numbers[1][1]);
    printf("%d\n",numbers[1][2]);

    printf("%d ",numbers[2][0]);
    printf("%d ",numbers[2][1]);
    printf("%d\n",numbers[2][2]);*/

    for (int i = 0; i < 3; i++)   // rows
    {
        for (int j = 0; j < 3; j++)   // columns
        {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

     printf("\n");

    char numpad[][3] = {{'1', '2', '3'},
                        {'4', '5', '6'},
                        {'7', '8', '9'},
                        {'*', '0', '#'}};

     for (int i = 0; i < 4; i++)   // rows
    {
        for (int j = 0; j < 3; j++)   // columns
        {
            printf("%c ", numpad[i][j]);
        }
        printf("\n");
    }                   

    return 0;
}