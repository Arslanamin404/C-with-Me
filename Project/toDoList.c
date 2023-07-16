// ************************************************* TO-DO-LIST *************************************************
//! NOW READ AND WRITE DATA TO FILES TO MAKE IT MORE ADVANCE
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <stdbool.h>

#define MAX_TASKS 120
#define MAX_TASK_NAME_LENGTH 81
#define MAX_TASK_DESCRIPTION_LENGTH 401

typedef struct
{
    char taskName[MAX_TASK_NAME_LENGTH];
    char taskDescription[MAX_TASK_DESCRIPTION_LENGTH];
    BOOL isCompleted;
} Task;

Task tasks[MAX_TASKS];
int numTasks = 0;

void addTask();
void viewTask();
void markTaskComplete();
void removeTask();

int main()
{
    printf("\t=========================================== To-Do-List ===========================================\n\n");
    char userName[51];
    printf("Please enter your name: ");
    fgets(userName, 51, stdin);
    userName[strcspn(userName, "\n")] = '\0';

    while (TRUE)
    {
        system("cls");
        printf("\t=========================================== To-Do-List ===========================================\n\n");

        //! MENU-Options
        int userChoice;
        printf("Please Select an action ---->\n\n");
        printf("1. Add Task  \t\t[1]\n2. View Task  \t\t[2]\n3. Remove Task  \t[3]\n4. Mark Task Completed  [4]\n5. Exit \t\t[5]\n\n");
        printf("Enter your choice: ");
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
            removeTask();
            break;

        case 4:
            Beep(4000, 300);
            markTaskComplete();
            break;

        case 5:
            Beep(4000, 300);
            printf("\nThank you \'%s\' for using our To-Do-List. Have a great time ahead.\n", userName);
            printf("We hope you enjoyed using our program and didn't face any difficulties.\n");
            printf("Visit us Again\nRegards: Future Gen\n\n");
            printf("Exiting. . .");
            getch();
            return 1;
            break;

        default:
            printf("\nInvalid choice! Please select a valid option. . .");
            getch();
            break;
        }
    }
    getch();
    return 0;
}

void addTask()
{
    fflush(stdin);
    if (numTasks >= MAX_TASKS)
    {
        printf("\n\nDataBase Full! Maximum number of tasks reached.\n\n");
        Beep(2000, 600);
        printf("Press any key to continue. . .");
        getch();
        return;
    }
    printf("\n\nEnter task name: ");
    fgets(tasks[numTasks].taskName, MAX_TASK_NAME_LENGTH, stdin);
    tasks[numTasks].taskName[strcspn(tasks[numTasks].taskName, "\n")] = '\0';

    printf("Enter task description: ");
    fgets(tasks[numTasks].taskDescription, MAX_TASK_DESCRIPTION_LENGTH, stdin);
    tasks[numTasks].taskDescription[strcspn(tasks[numTasks].taskDescription, "\n")] = '\0';

    printf("\nTask \'%s\' added successfully!\n\n", tasks[numTasks].taskName);
    Beep(2500, 800);
    printf("Press any key to continue. . .");
    getch();
    numTasks++;
}

void viewTask()
{
    if (numTasks < 1)
    {
        printf("\n\nTask List is empty. Please add some tasks\n\n");
        printf("Press any key to continue. . .");
        getch();
        return;
    }
    printf("\n\nTasks: \n");
    for (int i = 0; i < numTasks; i++)
    {
        printf("%d. Task: %s\n", i + 1, tasks[i].taskName);
        printf("   Description: %s\n", tasks[i].taskDescription);
        if (tasks[i].isCompleted == true)
        {
            printf("   Completed: Yes\n\n");
        }
        else
        {
            printf("   Completed: No\n\n");
        }
    }
    printf("Press any key to continue. . .");
    getch();
}

void markTaskComplete()
{
    if (numTasks < 1)
    {
        printf("\n\nNo task found. Task list is empty.\n");
        printf("Please add some tasks first . . .");
        getch();
        return; // Exit the function if there are no tasks
    }

    int taskNumber;
    printf("\n\nEnter the Task Number to mark as completed: ");
    scanf("%d", &taskNumber);

    //! Adjust task number to match array indexing (subtract 1)
    taskNumber = taskNumber - 1;

    if (taskNumber >= 0 && taskNumber < numTasks)
    {
        tasks[taskNumber].isCompleted = true; // Mark the task as completed
        printf("\nTask \'%s\' Marked as complete!\n",tasks[taskNumber].taskName);
        printf("\nPress any key to continue. . .");
        getch();
    }
    else
    {
        printf("\nInvalid Task Number!\n");
        printf("\nPress any key to continue. . .");
        getch();
    }
}

void removeTask()
{
    int taskNumber;
    printf("\n\nEnter task number to remove: ");
    scanf("%d", &taskNumber);

    //! Adjusting index to match array indexing (as index starts from 0)
    taskNumber = taskNumber - 1;

    //! Check if the task number is within valid range
    if (taskNumber >= 0 && taskNumber < numTasks)
    {
        //! Continue shifting until j reaches size - 1, to avoid accessing an out-of-bounds element i.e (size+1) elem
        for (int i = taskNumber; i < numTasks - 1; i++)
        {
            //! Shift tasks in the array to remove the selected task
            tasks[i] = tasks[i + 1];
        }

        //! Decrease the total number of tasks
        numTasks--;

        printf("\nTask removed successfully!\n");
        Beep(2000, 700);
        printf("\nPress any key to continue. . .");
        getch();
    }
    else
    {
        Beep(3000, 600);
        printf("\n\nInvalid Task Number. Please try again.\n");
        printf("\nPress any key to continue. . .");
        getch();
    }
}
