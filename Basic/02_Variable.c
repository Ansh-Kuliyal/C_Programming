#include <stdio.h>
#include <stdbool.h>
int main()
{

    // variable = a reusable container for a value
    //            behaves as if it were the value it contains
    // int = whole number (4 bytes in modern system)
    // float = single-precision decimal number (4 bytes)
    // double = double-precision decimal number (8 bytes)
    // char = single character (1 byte)
    // char[] = array of character (size varies)
    // bool = true or false (1 byte, requires <stdbool.h>)

    // int is used to store integers value
    // %d = format specifier for integer
    //      displays an integer (int)

    int age = 18;
    int year = 2026;
    printf("You are %d years old. \n", age);
    printf("The year is %d.\n", year);

    // float is used to store decimal value
    // %f = format specifier for float
    //      displays float

    float gpa = 1.5;
    float price = 69.99;
    printf("Your gpa is %f.\n", gpa);
    printf("The price is %f.\n", price);

    // double is used to store the double the decimal value of float
    // it is same as float but we can also use %lf (long float)
    // as there is default behavior of printing 6 decimal digits so we can use
    // "." and a number with it to display as many as decimal digit you want

    double a = 3.141592653589790;
    printf("The value of pi is  %.15f.\n", a);

    // char is used to store characters
    //  %c = format specifier for char
    //       displays char

    char grade = 'B';
    char symbol = '!';
    printf("Your grade is %c.\n", grade);
    printf("Your favorite symbol is %c.\n", symbol);

    // there is no string (a series of character) variable in C so we use
    // char name[] (this is an array it can store more than one value)
    // %s = format specifier for string(we can call this array string)
    //      displays string

    char name[] = "Ansh";
    char food[] = "Pizza";
    printf("Hello %s.\n", name);
    printf("Your favorite food is %s.\n", food);

    // to use bool we need to use #include <stdbool.h> header file
    // bool are  binary they either true(0) or false(1)
    // %d = format specifier for bool same as int
    //      displays only 1(true) and 0(false)
    // they are mostly used in loop
    bool isOnline = true;
    if (isOnline)
    {
        printf("You are ONLINE.");
    }
    else
    {
        printf("You are OFFLINE.");
    }
    return 0;
}
