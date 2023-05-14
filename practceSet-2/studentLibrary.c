/* A library charges a fine for every book returned late. For the first 5 days the fine is 50 paisa per day, for 6-10 days the fine is 1 rupee per day, and above 10 days the fine is 5 rupee per day. If user returned the book after 30 days his membership will be cancelled.
WAP to accept the number of days the user is late to return book and display the fine or appropriate message.
*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int days;
    float fine = 0;

    printf("\n\n--------------------------------------------------------------------------------------\n");

    printf("Welcome to TechLibrary.\nThis program is created to check your payable fine after violating return policy.");

    printf("\n---------------------------------------------------------------------------------------\n");

    printf("Enter the number of days late: ");
    scanf("%d", &days);
    printf("---------------------------------------------------------------------------------------\n");

    if (days <= 5)
    {
        fine = fine + (days * 0.50);
        printf("You are %d days late to return the book.\n", days);
        printf("Payable Fine = %0.2f Rs", fine);
    }
    else if (days <= 10)
    {
        fine = fine + (days * 1);
        printf("You are %d days late to return the book.\n", days);
        printf("Payable Fine = %0.2f Rs", fine);
    }
    else if (days > 10 && days <= 30)
    {
        fine = fine + (days * 5);
        printf("You are %d days late to return the book.\n", days);
        printf("Payable Fine = %0.2f Rs", fine);
    }
    else if (days > 30)
    {
        printf("\n--------------------------------------------------------------------------------------------------\n");
        printf("Your library membership has been canceled by the administration due to the violation of the return policy.\nTo continue purchase again the membership and read policies, rules and regulations carefully.");
    }
    
    printf("\nRegards TechLibrary");
    printf("\n--------------------------------------------------------------------------------------------------\n");
    
    getch();
    return 0;
}