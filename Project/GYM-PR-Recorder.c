#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// #include <conio.h>
/*
BASIC SKELETON PR RECORDER FOR POWERLIFTING
NOW YOU ONLY NEED TO SAVE THE RECORDS TO FILE


skip these functions if you are using windows, these functions are only recomended for linux as a alternative for getch();
// these 4 lines are used insted of getch function, in linux getch does not work
fflush(stdout);        // flush output buffer
system("stty raw");    // switch terminal to raw mode
getchar();             // read single character
system("stty cooked"); ////switch terminal back to cooked mode

*/
typedef struct
{
    int dd, mm, yyyy;
} date;
date ddmmyyyy;

typedef struct
{
    int planeBench, deadLift, squats;
} prTracker;
prTracker record;

void displayMenu();
void displayRecord(char *name);

int main()
{
    system("clear");
    printf("\t\t******************* Welcome to your own GYM PR Recorder *******************\n\n");
    char name[40];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    printf("\nEnter date in [dd mm yyyy] format [12 9 2023].\nYou will be first asked to enter the Date [dd] then month [mm] and at last you will be asked to enter the year[yyyy].\n\n");
    printf("Date [dd]: ");
    scanf("%d", &ddmmyyyy.dd);
    printf("Month [mm]: ");
    scanf("%d", &ddmmyyyy.mm);
    printf("Year [yyyy]: ");
    scanf("%d", &ddmmyyyy.yyyy);

    while (true)
    {
        system("clear");
        printf("\t\t\t\t Welcome %s! to your own GYM PR Recorder \n\n", name);
        printf("In this progam you will be asked to enter your personal record of Bench Press, Dead Lift and Squats.\nInorder to track your Personal Records and train respectively.\n\n");
        printf("---------------------\n");
        printf("| Date : %d-%d-%d |", ddmmyyyy.dd, ddmmyyyy.mm, ddmmyyyy.yyyy);
        printf("\n---------------------\n\n");

        displayMenu();
        int choice;
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nHow much do you bench (kgs): ");
            scanf("%d", &record.planeBench);
            printf("\nRecord Saved sucessfully\n");

            // these 4 lines are used insted of getch function, in linux getch does not work
            fflush(stdout);        // flush output buffer
            system("stty raw");    // switch terminal to raw mode
            getchar();             // read single character
            system("stty cooked"); ////switch terminal back to cooked mode

            getchar();
            // getch();
            break;

        case 2:
            printf("\nHow much do you Dead Lift (kgs): ");
            scanf("%d", &record.deadLift);
            printf("\nRecord Saved sucessfully\n");

            // these 4 lines are used insted of getch function
            fflush(stdout);        // flush output buffer
            system("stty raw");    // switch terminal to raw mode
            getchar();             // read single character
            system("stty cooked"); ////switch terminal back to cooked mode

            getchar();
            // getch();
            break;

        case 3:
            printf("\nHow much do you squat (kgs): ");
            scanf("%d", &record.squats);
            printf("\nRecord Saved sucessfully\n");

            // these 4 lines are used insted of getch function
            fflush(stdout);        // flush output buffer
            system("stty raw");    // switch terminal to raw mode
            getchar();             // read single character
            system("stty cooked"); ////switch terminal back to cooked mode

            getchar();
            // getch();
            break;

        case 4:
            displayRecord(name);
            break;

        case 5:
            printf("\nThank you %s for using this software. Have a great time ahead.\n", name);
            printf("We hope you enjoyed using our program and didn't face any difficulties.\n");
            printf("Visit us Again\nRegards: Future Gen\n");
            printf("Exiting. . .\n");

            // these 4 lines are used insted of getch function
            fflush(stdout);        // flush output buffer
            system("stty raw");    // switch terminal to raw mode
            getchar();             // read single character
            system("stty cooked"); ////switch terminal back to cooked mode

            getchar();
            // getch();
            return 1;
            break;

        default:
            printf("\nInvalid choice! Please select a valid option. . .\n");

            // these 4 lines are used insted of getch function
            fflush(stdout);        // flush output buffer
            system("stty raw");    // switch terminal to raw mode
            getchar();             // read single character
            system("stty cooked"); ////switch terminal back to cooked mode

            getchar();
            // getch();
            break;
        }
    }

    // these 4 lines are used insted of getch function
    fflush(stdout);        // flush output buffer
    system("stty raw");    // switch terminal to raw mode
    getchar();             // read single character
    system("stty cooked"); ////switch terminal back to cooked mode

    getchar(); // alternative of getch() for linux
    // getch();
    return 0;
}

void displayMenu()
{
    printf("Please select an action----->\n\n");
    printf("1. Plane Bench  [1]\n");
    printf("2. Dead Lift    [2]\n");
    printf("3. Squats\t[3]\n");
    printf("4. View PR\t[4]\n");
    printf("5. Exit\t\t[5]\n\n");
    printf("Please enter your choice: ");
}
void displayRecord(char *name)
{
    system("clear");
    // these 4 lines are used insted of getch function
    fflush(stdout);        // flush output buffer
    system("stty raw");    // switch terminal to raw mode
    getchar();             // read single character
    system("stty cooked"); ////switch terminal back to cooked mode

    printf("\n\n-------------------------------------------------------\n");
    printf("\t\tYOUR Personal RECORDS [PR]");
    printf("\n-------------------------------------------------------\n");
    printf("DATE: %d-%d-%d", ddmmyyyy.dd, ddmmyyyy.mm, ddmmyyyy.yyyy);
    printf("\n-------------------------------------------------------\n");
    printf("NAME : %s", name);
    printf("\n-------------------------------------------------------\n");
    printf("Bench Press: %d KGs\n", record.planeBench);
    printf("Dead Lift: %d KGs\n", record.deadLift);
    printf("Squats: %d KGs\n", record.squats);
    printf("--------------------------------------------------------\n\n");
    printf("Press any key to continue. . .");
    getchar();
    // getch();
}
