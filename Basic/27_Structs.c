#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct
{
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
} Student;

void printStudent(Student student);

int main()
{

    // struct = A custom container that holds multiple pieces of related information.
    //          Similar to Objects in other

    Student student1 = {"Spongebob", 28, 2.7, true};
    Student student2 = {"Patrick", 30, 3.6, false};
    Student student3 = {0};

    strcpy(student3.name, "Randy");
    student3.age = 26;
    student3.gpa = 4;
    student2.isFullTime = true;

   /* printf("%s\n", student1.name);
    printf("%d\n", student1.age);
    printf("%.2f\n", student1.gpa);
    printf("%s\n", (student1.isFullTime) ? "Yes" : "No");

    printf("\n%s\n", student2.name);
    printf("%d\n", student2.age);
    printf("%.2f\n", student2.gpa);
    printf("%s\n", (student2.isFullTime) ? "Yes" : "No");  */

    printStudent(student1);
    printStudent(student2);
    printStudent(student3);
    
    return 0;
}

void printStudent(Student student){
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("GPA: %.2f\n", student.gpa);
    printf("Full-Time: %s\n", (student.isFullTime) ? "Yes" : "No");
    printf("\n");
}