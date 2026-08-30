#include <stdio.h>
int main()
{
    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[13] = "";

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your gpa: ");
    scanf("%f", &gpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    getchar();

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    printf("%s\n", name);
    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);
    return 0;
}