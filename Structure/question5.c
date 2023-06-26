/*
* A record contains name of cricketer, his age, number of test matches that he has played and the average runs
* that he has scored in each test match. Create an array of structure to hold records of 20 such cricketer
* and then write a program to read these records.

Todo:    Arrange them in an ascending order by average runs of player.
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct
{
    char name[51];
    int age, noOfTestMatches;
    float avg;
} record;

void readStruct(record *cricketer, int size);
void sortStruct(record *cricketer, int size);
void printStruct(record *cricketer, int size);

void main()
{
    int exit;
    do
    {
        system("cls");
        printf("This program will hold a record containing name of cricketer, his age, number of test matches that he has played and the average runs that he has scored in each test match and sort the record in ascending order of average runs scored by player.\n\n");
        int size;
        printf("Number of Cricketers: ");
        scanf("%d", &size);
        fflush(stdin);

        record cricketer[size];

        readStruct(cricketer, size);

        sortStruct(cricketer, size);
        printf("Press any key to view the list of cricketers in ascending order of average runs he scored. . . ");
        getch();
        system("cls");

        printf("List of cricketers with their Name, Age , Number of Test Matches Played, in ascending order of average runs scored.\n");

        printf("\n|---------------------------------------------------------------------------------|\n");
        printf("| NAME\t\t\t\tAGE\t\t  MATCHES\t\t  AVERAGE |");
        printf("\n|---------------------------------------------------------------------------------|\n");
        
        printStruct(cricketer, size);

        printf("\n\nDo you want to run again this program? Press any key to continue and 0 to exit.\n");
        printf("Enter your choice: ");
        scanf("%d", &exit);

        if (exit == 0)
        {
            printf("\nThank you! Have a great time ahead. We hope you enjoyed using our program and didn't face any difficulties.\nVisit us again\nRegards: Future Gen\n\n");
        }

    } while (exit != 0);
    getch();
}
void readStruct(record *cricketer, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Name: ");
        gets(cricketer[i].name);
        printf("Age: ");
        scanf("%d", &cricketer[i].age);
        printf("No of Test Matches: ");
        scanf("%d", &cricketer[i].noOfTestMatches);
        printf("Average runs: ");
        scanf("%f", &cricketer[i].avg);
        fflush(stdin);
        printf("\n");
    }
}

void sortStruct(record *cricketer, int size)
{
    record temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (cricketer[i].avg > cricketer[j].avg)
            {
                temp = cricketer[j];
                cricketer[j] = cricketer[i];
                cricketer[i] = temp;
            }
        }
    }
}

void printStruct(record *cricketer, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("| %-30s %-20d %-20d %-6.2f |\n", cricketer[i].name, cricketer[i].age, cricketer[i].noOfTestMatches, cricketer[i].avg);
        printf("|---------------------------------------------------------------------------------|\n");
    }
}
