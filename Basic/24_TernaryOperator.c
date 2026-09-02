#include <stdio.h>
#include <stdbool.h>

int main()
{

    // ternary operator ? = shorthand for if-else statements
    // (condition) ? value_if_true : value_if_false;

    /*  int x = 5;
      int y = 7;
      int max = (x > y) ? x : y;

      printf("%d", max);  */

    /*  bool isOnline = true;

      printf("%s", (isOnline) ? "online" : "offline");  */

    /* int number = 8;

     printf("%d is %s", number, (number % 2 == 0) ? "even" : "odd");  */

    /* int age = 25;

     printf("%s", (age > 18) ? "adult" : "child"); */

    int hours = 12;
    int minutes = 30;

    printf("%02d:%02d %s", hours, minutes, (hours < 12) ? "AM" : "PM");

    return 0;
}