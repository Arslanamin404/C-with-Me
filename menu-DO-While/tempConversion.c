#include <stdio.h>
int main()
{
    float celsius, fahrenheit, total;
    int choice, exit;
    char name[50];
    printf("This is the temperature conversion program\n");
    printf("Enter your name: ");
    gets(name);
    do
    {
        printf("\nWelcome %s,\nselect your choice given below: \n 1 for Celsius to Fahrenheit. \n 2 for Fahrenheit to Celsius. \n 3 to QUIT.\n",name);
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter Temperature in Celsius: ");
            scanf("%f", &celsius);
            total = (celsius * 9 / 5) + 32;
            printf("%0.2f C = %0.2f F", celsius, total);
            break;
        case 2:
            printf("Enter Temperature in Fahrenheit: ");
            scanf("%f", &fahrenheit);
            total = (fahrenheit - 32) * 5 / 9;
            printf("%0.2f F = %0.2f C", fahrenheit, total);
            break;
        case 3:
            printf("Thank you %s for visiting us. Have a great time ahead.",name);
            break;
        default:
            printf("Invalid Input!");
        }
        printf("\nDo you want to check again?\n Enter 1 to run again and 0 to exit: ");
        scanf("%d", &exit);
    } while (exit!=0);
    return 0;
}