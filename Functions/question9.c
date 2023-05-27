// write a function to find the lcm of two numbers.
// logic for this program is written in function. in main() it is all for formatting so that program will look nice.
#include <stdio.h>
#include <conio.h>
int findLcm(int a, int b)
{
    int lcm, max;
    max = a > b ? a : b; //check notes
    for (lcm = max; lcm <= a * b; lcm++)
    {
        if (lcm % a == 0 && lcm % b == 0)
            break;
    }
    return lcm;
}

int main()
{
    int exit;

    do
    {
        printf("\n\n------------------------------------------------------------------------------------------------------------------\n");

        printf("Hello user, welcome to this program. In this program you will be able to find the LCM of two integers.\nYou will be asked to enter two numbers and the LCM of those two numbers will be on your output screen.\n");

        printf("------------------------------------------------------------------------------------------------------------------\n");

        int num1, num2;
        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);

        printf("------------------------------------------------------------------------------------------------------------------\n");

        printf("The LCM of %d and %d is %d", num1, num2, findLcm(num1, num2));

        printf("\n------------------------------------------------------------------------------------------------------------------\n\n");

        printf("Do you want to check again?\nEnter 1 to run again and 0 to exit: ");
        scanf("%d", &exit);

        if (exit == 0)
        {
            printf("\n------------------------------------------------------------------------------------------------------------------\n\n");
            printf("Thank You user, have a nice time ahead.\nWe sincerely hope you enjoyed this programme and got the answers to all of your questions correctly.\n");
            printf("Visit us again.\n");
            printf("Regards Mr. Mohammad Arsalan Rather.\n");
            printf("\n------------------------------------------------------------------------------------------------------------------\n");
        }

    } while (exit != 0);

    getch();
    return 0;
}
