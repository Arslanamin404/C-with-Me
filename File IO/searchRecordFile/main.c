#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_RECORDS 500
#define FILE_NAME "studentData.txt"

typedef struct
{
    int rollNum;
    char name[50];
    int sem;
    char course[80];
    char programme[50];
} student;

student record[MAX_RECORDS];
// Function prototypes
void menu();
void printData(int studentCount);
void search(int studentCount);
int addData(int studentCount);
void sort(int studentCount);

int main()
{
    FILE *fptr = fopen(FILE_NAME, "r");
    if (fptr == NULL)
    {
        printf("Error: Failed to open the file.");
        // Wait for user input before exit (simulating getch function on Unix-based systems)
        fflush(stdout);        // flush output buffer
        system("stty raw");    // switch terminal to raw mode
        getchar();             // read single character
        system("stty cooked"); // switch terminal back to cooked mode
        getchar();

        return 1;
    }

    int studentCount = 0;

    // Read student data from the file until the end of the file is reached
    while (studentCount < MAX_RECORDS && (fscanf(fptr, "Roll Number: %d\n", &record[studentCount].rollNum) == 1 &&
                                          fscanf(fptr, "Name: %49[^\n]\n", record[studentCount].name) == 1 &&
                                          fscanf(fptr, "Semester: %d\n", &record[studentCount].sem) == 1 &&
                                          fscanf(fptr, "Course: %79[^\n]\n", record[studentCount].course) == 1 &&
                                          fscanf(fptr, "Program: %49[^\n]\n", record[studentCount].programme) == 1))
    {
        // Increase the studentCount and dynamically reallocate memory for the 'record' array
        // to store the new student record
        studentCount++;
    }

    fclose(fptr);

    while (1)
    {
        system("clear");
        printf("Welcome to this program. In this program you can read the record of students from DB file.\nYou can also fetch details of a specific student by their roll numbers.\n\n");
        menu();
        int userChoice;
        scanf("%d", &userChoice);

        sort(studentCount);

        switch (userChoice)
        {
        case 1:
            printData(studentCount);
            break;
        case 2:
            search(studentCount);
            break;
        case 3:
            studentCount = addData(studentCount);
            break;
        case 4:
            printf("Exiting. . .");
            // Wait for user input before exit (simulating getch function on Unix-based systems)
            fflush(stdout);        // flush output buffer
            system("stty raw");    // switch terminal to raw mode
            getchar();             // read single character
            system("stty cooked"); // switch terminal back to cooked mode
            getchar();
            return 0; // Exit the program
        default:
            printf("Invalid Input. Please Try Again.\n");
            // Wait for user input before continuing (simulating getch function on Unix-based systems)
            fflush(stdout);        // flush output buffer
            system("stty raw");    // switch terminal to raw mode
            getchar();             // read single character
            system("stty cooked"); // switch terminal back to cooked mode
            getchar();
            break;
        }
    }
    return 0;
}

// Function to display the menu options
void menu()
{
    printf("1. DISPLAY RECORD [1]\n2. SEARCH RECORD  [2]\n3. ADD RECORD     [3]\n4. EXIT\t\t  [4]\n\n");
    printf("Enter your choice: ");
}

// Function to print student data
void printData(int studentCount)
{
    printf("\n\t\t-----------------------------------------------------------------------\n\n");
    // Print the details of each student
    for (int i = 0; i < studentCount; i++)
    {
        printf("RollNum: %d\n", record[i].rollNum);
        printf("Name: %s\n", record[i].name);
        printf("Semester: %d\n", record[i].sem);
        printf("Course: %s\n", record[i].course);
        printf("Program: %s\n", record[i].programme);
        printf("----------------------------------------------------------\n");
    }
    printf("\n\nPress any key to continue. . .");
    // Wait for user input before continuing (simulating getch function on Unix-based systems)
    fflush(stdout);        // flush output buffer
    system("stty raw");    // switch terminal to raw mode
    getchar();             // read single character
    system("stty cooked"); // switch terminal back to cooked mode
    getchar();
}

// Function to search student by roll number
void search(int studentCount)
{
    int searchRollNum, found = 0;
    printf("\nEnter roll number to search: ");
    scanf("%d", &searchRollNum);
    for (int i = 0; i < studentCount; i++)
    {
        if (record[i].rollNum == searchRollNum)
        {
            found = 1;
            printf("\n\n------------------------------------------------------------\n");
            printf("RollNum: %d\n", record[i].rollNum);
            printf("Name: %s\n", record[i].name);
            printf("Semester: %d\n", record[i].sem);
            printf("Course: %s\n", record[i].course);
            printf("Program: %s\n", record[i].programme);
            printf("-----------------------------------------------------------------\n");
            printf("\nPress any key to continue. . .");
            // Wait for user input before continuing (simulating getch function on Unix-based systems)
            fflush(stdout);        // flush output buffer
            system("stty raw");    // switch terminal to raw mode
            getchar();             // read single character
            system("stty cooked"); // switch terminal back to cooked mode
            getchar();
            break;
        }
    }
    if (!found)
    {
        printf("RollNumber not found. Please Try again");

        printf("\n\nPress any key to continue. . .");
        // Wait for user input before continuing (simulating getch function on Unix-based systems)
        fflush(stdout);        // flush output buffer
        system("stty raw");    // switch terminal to raw mode
        getchar();             // read single character
        system("stty cooked"); // switch terminal back to cooked mode
        getchar();
    }
}

// Function to add new students
int addData(int studentCount)
{
    student newRecord;
    printf("\nPlease enter the following details: \n\n");
    printf("RollNumber: ");
    scanf("%d", &newRecord.rollNum);

    getchar();
    printf("Name: ");
    fgets(newRecord.name, sizeof(newRecord.name), stdin);
    newRecord.name[strcspn(newRecord.name, "\n")] = '\0';

    printf("Semester: ");
    scanf("%d", &newRecord.sem);

    getchar();
    printf("Course: ");
    fgets(newRecord.course, sizeof(newRecord.course), stdin);
    newRecord.course[strcspn(newRecord.course, "\n")] = '\0';

    printf("Programme: ");
    fgets(newRecord.programme, sizeof(newRecord.programme), stdin);
    newRecord.programme[strcspn(newRecord.programme, "\n")] = '\0';

    for (int i = 0; i < studentCount; i++)
    {
        if (record[i].rollNum == newRecord.rollNum)
        {
            printf("\n\nError: Roll number already exists. Cannot add duplicate records.\n");

            printf("\n\nPress any key to continue. . .");
            // Wait for user input before continuing (simulating getch function on Unix-based systems)
            fflush(stdout);        // flush output buffer
            system("stty raw");    // switch terminal to raw mode
            getchar();             // read single character
            system("stty cooked"); // switch terminal back to cooked mode
            getchar();

            return 1; // Return without appending data
        }
    }
    // increase count and add newRecord to the record array
    record[studentCount] = newRecord;
    studentCount++;

    FILE *filePtr = fopen(FILE_NAME, "a");
    if (filePtr == NULL)
    {
        printf("Error: Failed to open the file.");
        // Wait for user input before exit (simulating getch function on Unix-based systems)
        fflush(stdout);        // flush output buffer
        system("stty raw");    // switch terminal to raw mode
        getchar();             // read single character
        system("stty cooked"); // switch terminal back to cooked mode
        getchar();
    }
    fprintf(filePtr, "Roll Number: %d\n", newRecord.rollNum);
    fprintf(filePtr, "Name: %s\n", newRecord.name);
    fprintf(filePtr, "Semester: %d\n", newRecord.sem);
    fprintf(filePtr, "Course: %s\n", newRecord.course);
    fprintf(filePtr, "Program: %s\n\n", newRecord.programme);

    fclose(filePtr);
    printf("\nRecord added successfully!");

    printf("\n\nPress any key to continue. . .");
    // Wait for user input before exit (simulating getch function on Unix-based systems)
    fflush(stdout);        // flush output buffer
    system("stty raw");    // switch terminal to raw mode
    getchar();             // read single character
    system("stty cooked"); // switch terminal back to cooked mode
    getchar();
    return studentCount;

}

// Function to sort students by roll number
void sort(int studentCount)
{
    student tempRecord;
    for (int i = 0; i < studentCount - 1; i++)
    {
        for (int j = i + 1; j < studentCount; j++)
        {
            if (record[i].rollNum > record[j].rollNum)
            {
                tempRecord = record[j];
                record[j] = record[i];
                record[i] = tempRecord;
            }
        }
    }
}
