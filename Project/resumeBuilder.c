#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <time.h>

void printResume(char *name, char *email, char *phone, char *address, char *title, char *summary);

void main()
{
    int exit;
    do
    {
        system("cls");
        char name[51];
        char email[41];
        char phone[11];
        char address[81];
        char professionalTitle[31];
        char summaryStatement[201];

        time_t now;
        time(&now);

        printf("\n\t\t\t\t\t       %s", ctime(&now)); // current time and date will be appear at the top
        printf("\n\t\t\t******************WELCOME TO FUTURE GEN Resume Builder *******************\n\n");

        printf("\nEnter your Full Name: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0'; // REMOVES NEWLINE WILL NULL CHARACTER
        fflush(stdin);

        printf("\nEnter your Email: ");
        fgets(email, sizeof(email), stdin);
        email[strcspn(email, "\n")] = '\0'; // REMOVES NEWLINE WILL NULL CHARACTER
        fflush(stdin);

        printf("\nEnter your 10-digit Phone Number: ");
        fgets(phone, sizeof(phone), stdin);
        phone[strcspn(phone, "\n")] = '\0'; // REMOVES NEWLINE WILL NULL CHARACTER
        fflush(stdin);

        if (strlen(phone) < 10)
        {
            // from windows.h,  produces a beep of 3000 Hz for 500 milliseconds.
            Beep(3000, 500);
            Beep(3000, 500);
            Beep(3000, 500);

            strcpy(phone, "Invalid Ph");
            printf("\n\tInvalid Phone Number\n");
        }

        printf("\nEnter your Address: ");
        fgets(address, sizeof(address), stdin);
        address[strcspn(address, "\n")] = '\0'; // REMOVES NEWLINE WILL NULL CHARACTER
        fflush(stdin);

        printf("\nEnter your Professional Title: ");
        fgets(professionalTitle, sizeof(professionalTitle), stdin);
        professionalTitle[strcspn(professionalTitle, "\n")] = '\0'; // REMOVES NEWLINE WILL NULL CHARACTER
        fflush(stdin);

        printf("\nEnter your Summary Statement (less than 200 words): ");
        fgets(summaryStatement, sizeof(summaryStatement), stdin);
        summaryStatement[strcspn(summaryStatement, "\n")] = '\0'; // REMOVES NEWLINE WILL NULL CHARACTER
        fflush(stdin);

        system("cls");

        printResume(name, email, phone, address, professionalTitle, summaryStatement);

        printf("\nDo you want to run again this program? Press any key to continue and 0 to exit.\n");
        printf("Enter your choice: ");
        scanf("%d", &exit);

        if (exit == 0)
        {
            printf("\nThank you %s! Have a great time ahead. We hope you enjoyed using our program and didn't face any difficulties.\nVisit us Again\nRegards: Future Gen\n\n", name);
        }
    } while (exit != 0);
    getch();
}

void printResume(char *name, char *email, char *phone, char *address, char *title, char *summary)
{
    printf("\nResume\n");
    printf("-----------------------------------------------------------------------------------------------");

    printf("\nName    :  %s", name);
    printf("\nEmail   :  %s", email);
    printf("\nPhone   :  %s", phone);
    printf("\nAddress :  %s", address);

    printf("\n-----------------------------------------------------------------------------------------------\n");

    printf("Professional Title : %s", title);
    printf("\n\nSummary : %s", summary);

    printf("\n-----------------------------------------------------------------------------------------------\n\n");
}