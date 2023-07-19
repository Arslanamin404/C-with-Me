#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// #include <conio.h>

#define FILENAME "GYM-PR-Tracker-DB.txt"

/*
! BASIC SKELETON PR RECORDER FOR POWERLIFTING
todo: NOW YOU ONLY NEED TO SAVE THE RECORDS TO FILE
* skip these functions if you are using windows, these functions are only recomended
* for linux as a alternative for getch();
* these 4 lines are used insted of getch function, in linux getch does not work
* fflush(stdout);        //? flush output buffer
* system("stty raw");    //? switch terminal to raw mode
* getchar();             //? read single character
* system("stty cooked"); //? switch terminal back to cooked mode
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

typedef struct
{
    int planeBenchReps, deadLiftReps, squatReps;
} prReps;
prReps reps;

void displayMenu();
void displayRecord();
void saveRecord();

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

    if (ddmmyyyy.dd > 31 || ddmmyyyy.mm > 12 || ddmmyyyy.yyyy < 2023)
    {
        printf("\nInvalid Date. Please try again. . .");
        // these 4 lines are used insted of getch function, in linux getch does not work
        fflush(stdout);        // flush output buffer
        system("stty raw");    // switch terminal to raw mode
        getchar();             // read single character
        system("stty cooked"); // switch terminal back to cooked mode
        getchar();
        // getch();
        return 1;
    }

    while (true)
    {
        system("clear");
        printf("==============================================================================================\n");
        printf("\t\t\t\t Welcome %s! to your own GYM PR Recorder ", name);
        printf("\n==============================================================================================\n\n");
        printf("In this program you will be asked to enter your personal record of Bench Press, Dead Lift and Squats including number of reps done. In order to track your Personal Records and practice accordingly.\nYou will be provided a menu of 6 different options each for different purpose.\nTo save data to file you have been given a separate option to accomplish that task.\n\n");
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
            printf("Number of Reps: ");
            scanf("%d", &reps.planeBenchReps);
            printf("\nPress any key to continue. . .");

            // these 4 lines are used insted of getch function, in linux getch does not work
            fflush(stdout);        // flush output buffer
            system("stty raw");    // switch terminal to raw mode
            getchar();             // read single character
            system("stty cooked"); // switch terminal back to cooked mode
            getchar();
            // getch();
            break;

        case 2:
            printf("\nHow much do you Dead Lift (kgs): ");
            scanf("%d", &record.deadLift);
            printf("Number of Reps: ");
            scanf("%d", &reps.deadLiftReps);
            printf("\nPress any key to continue. . .");

            // these 4 lines are used insted of getch function
            fflush(stdout);        // flush output buffer
            system("stty raw");    // switch terminal to raw mode
            getchar();             // read single character
            system("stty cooked"); // switch terminal back to cooked mode
            getchar();
            // getch();
            break;

        case 3:
            printf("\nHow much do you squat (kgs): ");
            scanf("%d", &record.squats);
            printf("Number of Reps: ");
            scanf("%d", &reps.squatReps);
            printf("\nPress any key to continue. . .");

            // these 4 lines are used insted of getch function
            fflush(stdout);        // flush output buffer
            system("stty raw");    // switch terminal to raw mode
            getchar();             // read single character
            system("stty cooked"); // switch terminal back to cooked mode
            getchar();
            // getch();
            break;

        case 4:
            saveRecord();
            printf("\nRecord saved to file sucessfully!\n\n");
            printf("Press any key to continue. . .");

            fflush(stdout);        // flush output buffer
            system("stty raw");    // switch terminal to raw mode
            getchar();             // read single character
            system("stty cooked"); // switch terminal back to cooked mode
            getchar();
            break;

        case 5:
            displayRecord();
            break;

        case 6:
            printf("\nThank you %s for using this software. Have a great time ahead.\n", name);
            printf("We hope you enjoyed using our program and didn't face any difficulties.\n");
            printf("Visit us Again\nRegards: Mohammad Arsalan Rather\n");
            printf("Exiting. . .\n");

            // these 4 lines are used insted of getch function
            fflush(stdout);        // flush output buffer
            system("stty raw");    // switch terminal to raw mode
            getchar();             // read single character
            system("stty cooked"); // switch terminal back to cooked mode
            getchar();
            // getch();
            return 1;
            break;

        default:
            printf("\nInvalid choice! Please select a valid option. . .\n");
            printf("\nPress any key to continue. . .");

            // these 4 lines are used insted of getch function
            fflush(stdout);        // flush output buffer
            system("stty raw");    // switch terminal to raw mode
            getchar();             // read single character
            system("stty cooked"); // switch terminal back to cooked mode
            getchar();
            // getch();
            break;
        }
    }
    saveRecord(name);
    // getch();
    return 0;
}

void displayMenu()
{
    printf("Please select an action----->\n\n");
    printf("1. Plane Bench  [1]\n");
    printf("2. Dead Lift    [2]\n");
    printf("3. Squats\t[3]\n");
    printf("4. Save Data\t[4]\n");
    printf("5. View PR\t[5]\n");
    printf("6. Exit\t\t[6]\n\n");
    printf("Please enter your choice: ");
}
void displayRecord()
{
    system("clear");
    FILE *fptr = fopen(FILENAME, "r");
    char ch = fgetc(fptr);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(fptr);
    }

    // these 4 lines are used insted of getch function
    fflush(stdout);        // flush output buffer
    system("stty raw");    // switch terminal to raw mode
    getchar();             // read single character
    system("stty cooked"); // switch terminal back to cooked mode
    getchar();
    // getch();
}

void saveRecord()
{
    FILE *filePtr = NULL;
    filePtr = fopen(FILENAME, "a");
    if (filePtr == NULL)
    {
        printf("Failed to save data.\n");
        // these 4 lines are used insted of getch function
        fflush(stdout);        // flush output buffer
        system("stty raw");    // switch terminal to raw mode
        getchar();             // read single character
        system("stty cooked"); // switch terminal back to cooked mode
        getchar();
        return;
    }
    fprintf(filePtr, "DATE: %d-%d-%d", ddmmyyyy.dd, ddmmyyyy.mm, ddmmyyyy.yyyy);
    fprintf(filePtr, "\n-------------------------------------------------------\n");
    fprintf(filePtr, "Bench Press\t %d KGs \t%d reps\n", record.planeBench, reps.planeBenchReps);
    fprintf(filePtr, "Dead Lift\t %d KGs \t%d reps\n", record.deadLift, reps.deadLiftReps);
    fprintf(filePtr, "Squats\t\t %d KGs \t%d reps\n", record.squats, reps.squatReps);
    fprintf(filePtr, "--------------------------------------------------------\n\n");
    fclose(filePtr);
}