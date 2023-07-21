#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EXERCISE 6
#define MAX_DAYS 6
#define FILE_NAME "GYMschedule.txt"

typedef struct
{
    int dd, mm, yyyy;
} date;
date timestamp;

typedef struct
{
    char day[12];
    char bodyPart[50];
    int numExercise;
    char exercise[MAX_EXERCISE][50];
} exerciseSchedule;
exerciseSchedule schedule;

void menu()
{
    printf("1. Add Exercise \t[1]\n2. View Schedule \t[2]\n3. Exit \t\t[3]\n\n");
}
void saveData()
{
    getchar(); // Clear the input buffer
    FILE *fptr = fopen(FILE_NAME, "a+");
    if (fptr == NULL)
    {
        printf("Error: Failed to open file");
        // these 4 lines are used instead of getch() function in linux
        fflush(stdout);        // flush output buffer
        system("stty raw");    // switch terminal to raw mode
        getchar();             // read single character
        system("stty cooked"); // switch terminal back to cooked mode
        getchar();
        return;
    }
    printf("\nNOTE: Enter date in [dd mm yyyy] format\n");
    printf("\nEnter Date [dd]: ");
    scanf("%d", &timestamp.dd);
    printf("Enter Month [mm]: ");
    scanf("%d", &timestamp.mm);
    printf("Enter Year [yyyy]: ");
    scanf("%d", &timestamp.yyyy);

    printf("\n-------------------------------------------------------------\n");
    fprintf(fptr, "Date: %d-%d-%d\n", timestamp.dd, timestamp.mm, timestamp.yyyy);
    getchar();
    printf("Day: ");
    fgets(schedule.day, sizeof(schedule.day), stdin);
    schedule.day[strcspn(schedule.day, "\n")] = '\0';
    fprintf(fptr, "Day: %s\n", schedule.day);

    printf("Body Part: ");
    fgets(schedule.bodyPart, sizeof(schedule.bodyPart), stdin);
    schedule.bodyPart[strcspn(schedule.bodyPart, "\n")] = '\0';
    fprintf(fptr, "BodyPart: %s\n", schedule.bodyPart);

    printf("Number of Exercise done : ");
    scanf("%d", &schedule.numExercise);
    fprintf(fptr, "Number of Exercises: %d\n", schedule.numExercise);
    getchar(); // Clear the input buffer

    printf("Name of Exercises: ");
    printf("\n------------------\n");
    fprintf(fptr, "List of Exercises: \n");

    for (int i = 0; i < schedule.numExercise; i++)
    {
        printf("Exercise %d: ", i + 1);
        fgets(schedule.exercise[i], sizeof(schedule.exercise[i]), stdin);
        schedule.exercise[i][strcspn(schedule.exercise[i], "\n")] = '\0';
        fprintf(fptr, "%d. %s\n", i + 1, schedule.exercise[i]);
    }
    fprintf(fptr, "-------------------------------------------------------------------------------\n");
    printf("\nPress any key to continue. . .");
    fclose(fptr);
    // these 4 lines are used instead of getch() function in linux
    fflush(stdout);        // flush output buffer
    system("stty raw");    // switch terminal to raw mode
    getchar();             // read single character
    system("stty cooked"); // switch terminal back to cooked mode
    getchar();
}
void loadData()
{
    FILE *fptr = fopen(FILE_NAME, "r");
    if (fptr == NULL)
    {
        printf("Error: Failed to open file");
        // these 4 lines are used instead of getch() function in linux
        fflush(stdout);        // flush output buffer
        system("stty raw");    // switch terminal to raw mode
        getchar();             // read single character
        system("stty cooked"); // switch terminal back to cooked mode
        getchar();
        return;
    }
    char ch = fgetc(fptr);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    fclose(fptr);
}
int main()
{
    while (1)
    {
        system("clear");
        printf("\t================================================================================================\n");
        printf("\t\t\t\t\t GYM EXERCISE SCHEDULE\n");
        printf("\t================================================================================================\n\n");

        int choice;
        menu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            saveData();
            break;
        case 2:
            printf("\n------------------------------------------------------------------\n");
            loadData();
            printf("\n\nPress any key to continue. . .");
            // these 4 lines are used instead of getch() function in linux
            fflush(stdout);        // flush output buffer
            system("stty raw");    // switch terminal to raw mode
            getchar();             // read single character
            system("stty cooked"); // switch terminal back to cooked mode
            getchar();
            // getch();
            break;
        case 3:
            printf("\nExiting. . .");
            // these 4 lines are used instead of getch() function in linux
            fflush(stdout);        // flush output buffer
            system("stty raw");    // switch terminal to raw mode
            getchar();             // read single character
            system("stty cooked"); // switch terminal back to cooked mode
            getchar();
            // getch();
            return 1;
            break;

        default:
            printf("\n-------------------------------------------------------------\n");
            printf("Invalid Choice. Please Try again. . .");
            printf("\nPress any key to continue. . .");
            // these 4 lines are used instead of getch() function in linux
            fflush(stdout);        // flush output buffer
            system("stty raw");    // switch terminal to raw mode
            getchar();             // read single character
            system("stty cooked"); // switch terminal back to cooked mode
            getchar();
            // getch();
            break;
        }
    }
    return 0;
}
