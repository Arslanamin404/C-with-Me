#include <stdio.h>
int main()
{
    int choice;
    int balance = 0, withdraw = 0, deposit = 0, total = 0;
    do
    {
        printf("Select your choice: \n 1 to deposit.\n 2 to withdraw.\n 3 to check balance.\n 4 to quit.\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter deposit amount (INR): ");
            scanf("%d", &deposit);
            // break;
        case 2:
            printf("Enter withdrawal amount (INR): ");
            scanf("%d", &withdraw);
            // break;
        case 3:
            total = total + deposit;
            total = total - withdraw;
            if (total < 0)
            {
                printf("Insufficent Balance.");
            }
            else
            {
                printf("Current Balance: %d", total);
            }
            // break;
        default:
            printf("\nThank you! Visit us again.\n\n");
        }
    } while (choice != 4);
    return 0;
}