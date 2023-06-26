/*
* Write a menu driven program that depicts the working of a library. The menu options should be:
* 1. Add book information
* 2. Display book information
* 3. List all books of given author
* 4. List the title of specified book
* 5. List the count of books in the library
* 6. List the books in the order of accession number
*7. Exit
todo: Create a structure called library to hold accession number, title of the book, author name, price of the book, and flag indicating whether book is issued or not.
*/
#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#define maxSize 300

typedef struct
{
    int accessionNumber;
    char title[81];
    char author[41];
    float price;
    bool isIssued;
} libraryDetails;

libraryDetails library[maxSize];

int count = 0;

void addBooks(libraryDetails *library);
void displayBooks(libraryDetails *library);
void displayBooksByAuthor(libraryDetails *library);
void displayBooksByAccessionNumber(libraryDetails *library);
void sortBooks(libraryDetails *library);
int main()
{
    int choice;
    do
    {
        system("cls");
        printf("Welcome to the Future Gen library. Select an action -->\n1. Add book information\n2. Display book information\n3. List all books of given author\n4. List the title of specified book\n5. List the count of books in the library\n6. List the books in the order of accession number\n7. Exit\n\n");

        printf("Please enter your choice :  ");
        scanf("%d", &choice);

        int numberOfBooks = 0;
        switch (choice)
        {
        case 1:
            addBooks(library);
            printf("\nPress any key to continue. . .\n");
            getch();
            break;
        case 2:
            displayBooks(library);
            printf("\nPress any key to continue. . .\n");
            getch();
            break;

        case 3:
            displayBooksByAuthor(library);
            printf("\nPress any key to continue. . .\n");
            getch();
            break;

        case 4:
            displayBooksByAccessionNumber(library);
            printf("\nPress any key to continue. . .\n");
            getch();
            break;

        case 5:
            printf("Total books in the library: %d\n", count);
            printf("\nPress any key to continue. . .\n");
            getch();
            break;

        case 6:
            sortBooks(library);

            printf("List of books in the ascending order of accession number: ");
            printf("\n----------------------------------------------------------\n");
            displayBooks(library);

            printf("\nPress any key to continue. . .\n");
            getch();
            break;

        case 7:
            printf("Exiting the program . . . GoodBye!\n");
            getch();
            break;

        default:
            printf("Invalid choice. Please try again.\n");
            printf("\nPress any key to continue. . .\n");
            getch();
        }

    } while (choice != 7);
    getch();
    return 0;
}

void addBooks(libraryDetails *library)
{

    printf("\nNumber of books: ");
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        printf("Enter Accession Number: ");
        scanf("%d", &library[i].accessionNumber);
        fflush(stdin);

        printf("Enter Title of Book: ");
        gets(library[i].title);

        printf("Enter Book Author Name: ");
        gets(library[i].author);

        printf("Enter Price of the Book (INR): ");
        scanf("%f", &library[i].price);

        printf("Is the book issued?(1 for Yes / 0 for No): ");
        scanf("%d", &library[i].isIssued);

        printf("\nBook added successfully. . !\n\n\n");
    }
}

void displayBooks(libraryDetails *library)
{

    printf("\nDetails of each book that is present in library is given below: ");
    printf("\n-------------------------------------------------------------------------\n");
    for (int i = 0; i < count; i++)
    {
        printf("Accession Number: %d\n", library[i].accessionNumber);
        printf("Title: %s\n", library[i].title);
        printf("Author: %s\n", library[i].author);
        printf("Price: %.2f\n", library[i].price);

        if (library[i].isIssued == 0)
            printf("Book is not issued");
        else
            printf("Book is issued");

        printf("\n-----------------------------------------------------\n");
    }
}

void displayBooksByAuthor(libraryDetails *library)
{
    fflush(stdin);
    char authorName[41];
    printf("Enter the name of author: ");
    gets(authorName);

    int found = 0;

    printf("\nList of books written by \"%s\" are given below: ", authorName);
    printf("\n---------------------------------------------------------------------\n");
    for (int i = 0; i < count; i++)
    {
        if (strcmp(library[i].author, authorName) == 0)
        {
            printf("Accession Number: %d\n", library[i].accessionNumber);
            printf("Title: %s\n\n", library[i].title);
            found = 1;
        }
    }
    if (!found)
        printf("\nNo book was found by the author %s\n", authorName);
}

void displayBooksByAccessionNumber(libraryDetails *library)
{
    int accessionNum, found = 0;
    printf("Enter Accession Number of book: ");
    scanf("%d", &accessionNum);

    printf("---------------------------------\n");

    for (int i = 0; i < count; i++)
    {
        if (library[i].accessionNumber == accessionNum)
        {
            printf("Title: %s\n", library[i].title);
            printf("Price: %.2f\n", library[i].price);
            found = 1;
        }
    }

    if (!found)
        printf("No book was found with the accession number: %d\n", accessionNum);

    printf("---------------------------------\n");
}

void sortBooks(libraryDetails *library)
{
    libraryDetails temp;
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (library[i].accessionNumber > library[j].accessionNumber)
            {
                temp = library[j];
                library[j] = library[i];
                library[i] = temp;
            }
        }
    }
}
