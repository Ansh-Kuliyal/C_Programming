#include <stdio.h>

void checkBalance(float balance);
float deposit();
float withdraw(float balance);

int main()
{
    // BANKING PROGRAM

    int choice = 0;
    float balance = 0.0f;
    float amount = 0.0f;

    printf("*** WELCOME TO THE BANK ***\n");

    do
    {
        printf("\nSelect an option:\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");

        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            checkBalance(balance);
            break;

        case 2:
            balance += deposit();
            break;

        case 3:
            balance -= withdraw(balance);
            break;

        case 4:
            printf("\nThankyou for using our bank!\n");
            break;

        default:
            printf("\nInvaild choice! Please select an option 1 - 4\n");
            break;
        }
    } while (choice != 4);

    return 0;
}
void checkBalance(float balance)
{
    printf("\nYour current Balance is $%.2f\n", balance);
}
float deposit()
{
    float amount = 0.0f;

    printf("\nEnter the amount to deposit $");
    scanf("%f", &amount);

    if (amount < 0)
    {
        printf("\nInvalid Amount!\n");
        return 0.0f;
    }
    else
    {
        printf("\nSucessfully Deposited\n");
        return amount;
    }

    return 0.0f;
}
float withdraw(float balance)
{
    float amount = 0.0f;

    printf("\nEnter the amount to withdraw $");
    scanf("%f", &amount);

    if (amount < 0)
    {
        printf("\nInvalid Amount\n");
        return 0.0f;
    }
    else if (amount > balance)
    {
        printf("\nInsufficient Balance! Your balance is $%.2f\n", balance);
        return 0.0f;
    }
    else
    {
        printf("\nSucessfully Withdrew $%.2f\n", amount);
        return amount;
    }
    return 0.0f;
}