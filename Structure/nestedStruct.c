#include <stdio.h>
#include <conio.h>
struct date
{
    int date;
    int month;
    int year;
};
struct customer
{
    char name[40];
    char phone[11]; // 10 for number and 1 for null
    int netSale;
    struct date dateOfPurchase;
};
int main()
{
    printf("\nWelcome user, this program will store the details of your customers.\nYou will be asked to input number of customers to be added.\nThen you will be asked to enter the Name, Phone number, NetSale and DateOfPurchase (dd/mm/yyyy)of customers respectively");
    printf("\n--------------------------------------------------------------------------------------------------------------------\n");
    int size;
    printf("Enter number of customers: ");
    scanf("%d", &size);

    struct customer person[size];

    for (int i = 0; i < size; i++)
    {
        printf("\n------------------------------------------------------\n");
        printf("Enter details of Customer %d: \n", i + 1);
        fflush(stdin); // to clear buffer value

        printf("Name: ");
        gets(person[i].name);

        printf("Phone Number: ");
        gets(person[i].phone);

        printf("Net Sale: ");
        scanf("%d", &person[i].netSale);

        printf("\nDate of Purchase (dd/mm/yyyy):\n");
        printf("Date (dd): ");
        scanf("%d", &person[i].dateOfPurchase.date);

        printf("Month (mm): ");
        scanf("%d", &person[i].dateOfPurchase.month);

        printf("Year (yyyy): ");
        scanf("%d", &person[i].dateOfPurchase.year);

        if (person[i].dateOfPurchase.date > 31 || person[i].dateOfPurchase.month > 12 || person[i].dateOfPurchase.year > 2023 || person[i].dateOfPurchase.year < 2022)
        {
            printf("\nYou Entered INVALID DATE\n");
        }
    }

    printf("\n\nCustomer Details: ");
    printf("\n----------------------------------------------------------------------------------\n");
    for (int i = 0; i < size; i++)
    {
        // printf("Name: %s\nPhone Number: %s\nNet Sale: %d\nDate Of Purchase: %d/%d/%d", person[i].name, person[i].phone, person[i].netSale, person[i].dateOfPurchase.date, person[i].dateOfPurchase.month, person[i].dateOfPurchase.year);

        if (person[i].dateOfPurchase.date > 31 || person[i].dateOfPurchase.month > 12 || person[i].dateOfPurchase.year > 2023 || person[i].dateOfPurchase.year < 2022)
        {
            printf("%s\t %s\t %d\t INVALID DATE", person[i].name, person[i].phone, person[i].netSale);
        }
        else
        {
            printf("%s\t %s\t %d\t %d/%d/%d", person[i].name, person[i].phone, person[i].netSale, person[i].dateOfPurchase.date, person[i].dateOfPurchase.month, person[i].dateOfPurchase.year);
        }
        printf("\n----------------------------------------------------------------------------------\n");
    }
    getch();
}
