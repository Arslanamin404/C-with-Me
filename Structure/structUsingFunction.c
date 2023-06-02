#include <stdio.h>
#include <conio.h>
// Structure deceleration
struct contacts
{
    char name[40];
    char phoneNum[11]; // 11=> 10 for contact number and 1 for null character
    char email[50];
};

void readEmployeeData(struct contacts *person, int size);
void printEmployeeData(struct contacts *person, int size);

int main()
{
    printf("Welcome user, this program will store the contact details.\nYou will be asked to input number of contacts to be added and then you will be asked to enter the Name, Phone number and email of person respectively");
    printf("\n--------------------------------------------------------------------------------------------------------------------\n");
    int size;

    printf("Input number of contacts: ");
    scanf("%d", &size);

    struct contacts person[size];

    // name of array gives the address of first element.
    readEmployeeData(person, size);

    printf("\n\nContact Details:");
    printf("\n--------------------------------------\n");

    printEmployeeData(person, size);

    getch();
    return 0;
}

void readEmployeeData(struct contacts *person, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\nEnter details of Person %d: \n", i + 1);
        fflush(stdin);
    
        /* fflush(stdin); is used to clear input buffer, if we dont use fflush(stdin), when we were hitting enter it was storing that value in new variable, as we know enter key is combination of two keys(new line and carriage return).   
        */

        //fgets() prints new line at the end of string.    
        
        printf("Name: ");
        gets(person[i].name);
        // fgets(person[i].name,sizeof(person->name),stdin);
        fflush(stdin);

        printf("Phone Number: ");
        gets(person[i].phoneNum);
        // fgets(person[i].phoneNum,sizeof(person->phoneNum),stdin);
        fflush(stdin);

        printf("Email address: ");
        gets(person[i].email);
        // fgets(person[i].email,sizeof(person->email),stdin);
        fflush(stdin);
    }
}

void printEmployeeData(struct contacts *person, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Name: %s\n", person[i].name);
        printf("Phone Number: %s\n", person[i].phoneNum);
        printf("Email Address: %s\n", person[i].email);
        printf("--------------------------------------\n");
    }
}