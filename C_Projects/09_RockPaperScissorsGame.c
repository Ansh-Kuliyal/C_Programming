#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    // ROCK PAPER SCISSORS

    srand(time(NULL));

    printf("***ROCK PAPER SCISSORS***\n");

    int userChoice = getUserChoice();
    int computerChoice = getComputerChoice();

    switch (userChoice)
    {
    case 1:
        printf("You chose ROCK\n");
        break;
    case 2:
        printf("You chose PAPER\n");
        break;
    case 3:
        printf("You chose SCISSORS\n");
        break;
    }
    switch (computerChoice)
    {
    case 1:
        printf("Computer chose ROCK\n");
        break;
    case 2:
        printf("Computer chose PAPER\n");
        break;
    case 3:
        printf("Computer chose SCISSORS\n");
        break;
    }

    checkWinner(computerChoice, userChoice);

    return 0;
}

int getComputerChoice()
{
    return rand() % 3 + 1;
}
int getUserChoice(
)
{

    int choice = 0;
    do
    {
        printf("Choose an option:\n");
        printf("1. Rock\n");
        printf("2. Paper\n");
        printf("3. Scissors\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

    } while (choice < 1 || choice > 3);
      return choice;
}
void checkWinner(int computerChoice, int userChoice)
{

    if (userChoice == computerChoice)
    {
        printf("It's a tie!\n");
    }
    else if ((userChoice == 1 && computerChoice == 3) ||
             (userChoice == 2 && computerChoice == 1) ||
             (userChoice == 3 && computerChoice == 2))
    {
        printf("YOU WON !\n");
    }
    else
    {
        printf("YOU LOSE!!\n");
    }
}