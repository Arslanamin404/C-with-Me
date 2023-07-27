#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_NAME "dataFile.txt"
#define SORTED_FILE_NAME "sortedDataFile.txt"
#define MAX_RECORDS 200

typedef struct
{
    char name[50];
    int age;
} student;

student record[MAX_RECORDS];
int numStudents = 0;

void readFile();
void sort();
void printData();
int main()
{
    readFile();
    sort();
    printData();
    return 0;
}

void readFile()
{
    FILE *filePtr = fopen(FILE_NAME, "r");
    if (filePtr == NULL)
    {
        printf("Error : Failed to Open the file\n");
        return;
    }

    while (numStudents < MAX_RECORDS && (fscanf(filePtr, "Name: %[^\n]\n", record[numStudents].name) == 1 &&
                                         fscanf(filePtr, "Age: %d\n", &record[numStudents].age) == 1))
    {
        numStudents++;
    }
    fclose(filePtr);
}

void sort()
{
    student tempRecord;
    for (int i = 0; i < numStudents - 1; i++)
    {
        for (int j = i + 1; j < numStudents; j++)
        {
            if (strcmp(record[i].name, record[j].name) > 0)
            {
                tempRecord = record[j];
                record[j] = record[i];
                record[i] = tempRecord;
            }
        }
    }
}

void printData()
{
    FILE *filePtr = fopen(SORTED_FILE_NAME, "w+");
    if (filePtr == NULL)
    {
        printf("Error : Failed to Open the file\n");
        return;
    }

    printf("\nList of participants Name and Age in alphabetic order");
    printf("\n-----------------------------------------------------------\n\n");
    for (int i = 0; i < numStudents; i++)
    {
        printf("Name: %s\n Age: %d\n\n", record[i].name, record[i].age);
        fprintf(filePtr,"Name: %s\n Age: %d\n\n", record[i].name, record[i].age);  
    }
}
