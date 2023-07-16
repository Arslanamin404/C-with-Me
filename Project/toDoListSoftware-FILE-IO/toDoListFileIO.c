// ************************************************* TO-DO-LIST *************************************************
//! NOW READ AND WRITE DATA TO FILES TO MAKE IT MORE ADVANCE
#include <stdio.h>
#include <stdbool.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

#define FILENAME "toDoListData.txt"
#define MAX_TASKS 120
#define MAX_TASK_NAME_LENGTH 81
#define MAX_TASK_DESCRIPTION_LENGTH 401

typedef struct
{
    char taskName[MAX_TASK_NAME_LENGTH];
    char taskDescription[MAX_TASK_DESCRIPTION_LENGTH];
} Task;

Task tasks[MAX_TASKS];
int NumTasks = 0;

void displayMenu();
void addTask();
void viewTask();

int main()
{
    while (TRUE)
    {
        system("cls");
        printf("\t=========================================== To-Do-List ===========================================\n\n");

        //! MENU-Options
        displayMenu();
        int userChoice;
        scanf("%d", &userChoice);

        switch (userChoice)
        {
        case 1:
            Beep(4000, 300);
            addTask();
            break;
        case 2:
            Beep(4000, 300);
            viewTask();
            break;
        case 3:
            Beep(4000, 300);
            printf("\nThank you user for using our To-Do-List. Have a great time ahead.\n");
            printf("We hope you enjoyed using our program and didn't face any difficulties.\n");
            printf("Visit us Again\nRegards: Future Gen\n\n");
            printf("Exiting. . .");
            getch();
            return 1;
            break;

        default:
            printf("\nInvalid choice! Please select a valid option. . .");
            Beep(4000, 800);
            getch();
            break;
        }
    }
    getch();
    return 0;
}

void displayMenu()
{
    printf("Please Select an action ---->\n\n");
    printf("1. Add Task  \t[1]\n2. View Task  \t[2]\n3. Exit \t[3]\n\n");
    printf("Enter your choice: ");
}

void addTask()
{
    fflush(stdin);
    if (NumTasks >= MAX_TASKS)
    {
        printf("\n\nDataBase Full! Maximum number of tasks reached.\n\n");
        Beep(2000, 600);
        printf("Press any key to continue. . .");
        getch();
        return;
    }
    printf("\n\nEnter task name: ");
    fgets(tasks[NumTasks].taskName, MAX_TASK_NAME_LENGTH, stdin);
    tasks[NumTasks].taskName[strcspn(tasks[NumTasks].taskName, "\n")] = '\0';

    printf("Enter task description: ");
    fgets(tasks[NumTasks].taskDescription, MAX_TASK_DESCRIPTION_LENGTH, stdin);
    tasks[NumTasks].taskDescription[strcspn(tasks[NumTasks].taskDescription, "\n")] = '\0';

    FILE *FilePtr = fopen(FILENAME, "a+");
    if (FilePtr == NULL)
    {
        printf("\nERROR : Failed to open the file");
        getch();
        return;
    }
    fprintf(FilePtr, "Task Name: %s\nDescription: %s\n", tasks[NumTasks].taskName, tasks[NumTasks].taskDescription);
    fprintf(FilePtr, "----------------------------------------------------------------------------------------\n");
    fclose(FilePtr);

    printf("\nTask \'%s\' added successfully!\n\n", tasks[NumTasks].taskName);
    Beep(2500, 800);
    printf("Press any key to continue. . .");
    getch();
    NumTasks++;
}

void viewTask()
{
    FILE *FilePtr = fopen(FILENAME, "r");
    if (FilePtr == NULL)
    {
        printf("\n\nTask List is empty. Please add some tasks\n\n");
        getch();
        return;
    }

    printf("\n\n-------------------------------------------------------------------------------\n");
    printf("\t\tTASKS");
    printf("\n-------------------------------------------------------------------------------\n");

    char ch = fgetc(FilePtr);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(FilePtr);
    }

    fclose(FilePtr);
    printf("Press any key to continue. . .");
    getch();
}