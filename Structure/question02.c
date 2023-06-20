/*
Create a structure to specify data of customers in a bank. The data to be stored is: Account number, Name, Balance in
account. Assume maximum of 200 customers in the bank.

    (a) Write a function to print the Account number and name of each customer with balance below Rs. 100.
    (b) If a customer request for withdrawal or deposit, it is given in the form:
        Acct. no, amount, code (1 for deposit, 0 for withdrawal)
        Write a program to give a message, “The balance is insufficient for the specified withdrawal”.
*/

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

#define size 200

struct banking
{
    char name[50];
    long int accountNum;
    int balance;
} customers[size];

void readDetails(struct banking *customers, int n);
void transaction(long int acc, int amount, int code, int n);
void below100(int n);

int main()
{
    int n;
    printf("Enter number of Customers: ");
    scanf("%d", &n);
    fflush(stdin);
    printf("------------------------------\n");

    readDetails(customers, n);

    long int AcctNno;
    int amount, code;

    printf("\nNow you will be redirected to withdrawal and deposit section.\nPress any key to continue . . . ");
    getch();

    printf("\n\nEnter your account Number: ");
    scanf("%ld", &AcctNno);

    printf("Enter 1 for deposit and 0 for withdrawal: ");
    scanf("%d", &code);

    if (code == 0)
    {
        printf("Enter amount to be withdraw: ");
        scanf("%d", &amount);
    }
    else
    {
        printf("Enter amount to deposit: ");
        scanf("%d", &amount);
    }

    printf("\n");

    transaction(AcctNno, amount, code, n);

    getch();
    system("cls");  //from stdlib.h

    below100(n);

    getch();
    return 0;
}
void readDetails(struct banking *customers, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Customer %d: ", i + 1);
        printf("\n------------------------------\n");

        printf("Full Name: ");
        gets(customers[i].name);

        printf("Account Number (16-Digits): ");
        scanf("%ld", &customers[i].accountNum);

        printf("Account Balance: ");
        scanf("%d", &customers[i].balance);
        fflush(stdin);

        printf("\n");
    }
}

void transaction(long int acc, int amount, int code, int n)
{
    for (int i = 0; i < n; i++)
    {
        if ((long int)customers[i].accountNum == acc) // typecasting to long int otherwise it will generate warning
        {
            if (code == 0)
            {
                if (customers[i].balance - amount < 100)
                {
                    printf("\nThe balance is insufficient for the specified withdrawal.");
                    return; // instead of using return 0; we will use return; bex we are using void.
                }
                else
                {
                    customers[i].balance -= amount;
                    printf("\nYour new balance is %d", customers[i].balance);
                    break;
                }
            }
            else
            {
                customers[i].balance += amount;
                printf("\nYour new balance is %d", customers[i].balance);
                break;
            }
        }
    }
}

void below100(int n)
{
    printf("\nList of customers having account balance less than 100: ");
    printf("\n-------------------------------------------------------------------------\n");
    for (int i = 0; i < n; i++)
    {
        if (customers[i].balance < 100)
        {
            printf("Name: %s\t\tAccountNumber: %ld\t\n", customers[i].name, customers[i].accountNum);
        }
    }
}
