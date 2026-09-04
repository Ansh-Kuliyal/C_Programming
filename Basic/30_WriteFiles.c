#include <stdio.h>

int main(){

    // WRITE A FILE

    FILE *pFile = fopen("Output.txt","w");

    char text[] = "GOOOo GOOO GOOOO\nROCKING EVERYWHERE!!";

    if(pFile == NULL){
        printf("Error opening a file\n");
        return 1;
    }

    fprintf(pFile,"%s",text);

    printf("File was written successfully");

    fclose(pFile);

    return 0;
}