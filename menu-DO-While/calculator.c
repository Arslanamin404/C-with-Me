#include <stdio.h>
int main()
{
    int opp, num1, num2, exit;
    char name[50];
    printf("This is a simple calculator.\n");
    printf("Enter your name: ");
    gets(name);
    do
    {
        printf("Welcome %s, Chose your operator given below: \n  1 --> ADDITION.\n  2 --> SUBTRACTION.\n  3 --> MULTIPLICATION.\n  4 --> DIVISION.\n  0 --> EXIT.\n\n",name);
        printf("Enter your operator: ");
        scanf("%d", &opp);
        switch (opp)
        {
        case 1:
            printf("Enter num1: ");
            scanf("%d", &num1);
            printf("Enter num2: ");
            scanf("%d", &num2);
            printf("\nSUM is %d", num1 + num2);
            break;
        case 2:
            printf("Enter num1: ");
            scanf("%d", &num1);
            printf("Enter num2: ");
            scanf("%d", &num2);
            printf("\nDifference is %d", num1 - num2);
            break;
        case 3:
            printf("Enter num1: ");
            scanf("%d", &num1);
            printf("Enter num2: ");
            scanf("%d", &num2);
            printf("\nProduct is %d", num1 * num2);
            break;
        case 4:
            printf("Enter num1: ");
            scanf("%d", &num1);
            printf("Enter num2: ");
            scanf("%d", &num2);
            printf("\nQuotient is %d", num1 / num2);
            break;
        default:
            printf("\nInvalid Operator");
        }
        printf("\n\nDo you want to continue?\n");
        printf("Enter 1 to continue and 0 to exit: ");
        scanf("%d", &exit);
        if (exit == 0)
        {
            printf("Thank you %s! Have a nice time.",name);
        }

    } while (exit != 0);

    return 0;
}