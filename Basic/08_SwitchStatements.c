#include <stdio.h>

int main(){

    // switch = an alternative to using many if-else statements 
    //          more sufficient with fuxed integers value

int dayOfWeek = 1;

printf("Enter the day of week (1-7): ");
scanf("%d",&dayOfWeek);

switch(dayOfWeek){
    case 1:
      printf("It is Monday");
      break;
    case 2:
      printf("It is Tuesday");
      break;
    case 3:
      printf("It is Wednesday");
      break;
    case 4:
      printf("It is Thrusday");
      break;
    case 5:
      printf("It is Friday");
      break;
    case 6:
      printf("It is Saturday");
      break;
    case 7:
      printf("It is Sunday");
      break;
    default:
    printf("Please only enter a number (1 to 7)");  
}

    return 0;
}