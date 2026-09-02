#include <stdio.h>

// typedef enum{
//     SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THRUSDAY, FRIDAY, SATURDAY
// }Day;

typedef enum
{
    SUCCESS,
    FAILURE,
    PENDING
} Status;

int main()
{

    // enum = A user definied data type that consists of a set of named integer constants.
    //        Benefit: Replaces number with readable names

    /*  Day today = SUNDAY;

      if(today == SUNDAY || SATURDAY){
          printf("It's a weekend");
      }
      else{
          printf("It's a weekday");
      }  */

    Status status = PENDING;

    connectStatus(status);

    return 0;
}
void connectStatus(Status status)
{

    switch (status)
    {
    case SUCCESS:
        printf("Connection was successful\n");
        break;
    case FAILURE:
        printf("Could not connect\n");
        break;
    case PENDING:
        printf("Connecting...\n");
        break;
    }
}