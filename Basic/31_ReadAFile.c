#include <stdio.h>

int main()
{

    // READ A File

    FILE *pFile = fopen("Input.txt", "r");
    char buffer[1024] = {0}; // Temporarily store a Data.

    if (pFile == NULL)
    {
        printf("Error opening the file\n");
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), pFile) != NULL)
    {
        printf("%s", buffer);
    }

    fclose(pFile);

    return 0;
}