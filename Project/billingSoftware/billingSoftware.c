#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <windows.h>


#define MAX_COMPANY_NAME_LENGTH 60
#define MAX_ADDRESS_LENGTH 150
#define MAX_CONTACT_NUMBER_LENGTH 11
#define MAX_CUSTOMER_NAME_LENGTH 100
#define MAX_CUSTOMER_ID_LENGTH 10
#define MAX_ITEM_NAME_LENGTH 100


typedef struct
{
    char companyName[MAX_COMPANY_NAME_LENGTH];
    char address[MAX_ADDRESS_LENGTH];
    char contactNumber[MAX_CONTACT_NUMBER_LENGTH];
} companyDetails;

typedef struct
{
    char customerName[MAX_CUSTOMER_NAME_LENGTH];
    char customerID[MAX_CUSTOMER_ID_LENGTH];
    char customerNumber[MAX_CONTACT_NUMBER_LENGTH];
} customerDetails;

typedef struct
{
    char itemName[MAX_ITEM_NAME_LENGTH];
    float price;
    int quantity;
} product;

void AddCompanyDetails(companyDetails *company);
void AddCustomerDetails(customerDetails *customer);
void AddProducts(product *items, int numOfItems);
void generateInvoice(companyDetails *company, customerDetails *customer, product *items, int numOfItems);
void writeInvoiceToFile(companyDetails *company, customerDetails *customer, product *items, int numOfItems);

int main()
{
    printf("\t*********************** Welcome to Future Gen Corporation Billing Software ***************************\n\n");

    companyDetails company;
    AddCompanyDetails(&company);

    char choice;
    customerDetails customer;
    AddCustomerDetails(&customer);
    do
    {
        int numOfItems;
        printf("\n\nNumber of items: ");
        scanf("%d", &numOfItems);

        product items[numOfItems];
        AddProducts(items, numOfItems);

        generateInvoice(&company, &customer, items, numOfItems);
        writeInvoiceToFile(&company, &customer, items, numOfItems);

        fflush(stdin);
        printf("\n---------------------------------------------------------------\n");
        printf("Do you want to generate another user's Bill? (Y/N): ");
        scanf("%c", &choice);

        if (choice == 'n' || choice == 'N')
        {
            printf("\n\nNo more bills to add. Exiting the program . . .\n");
            getch();
            return 1;
        }

    } while (choice != 'n' || choice == 'N');
    getch();
    return 0;
}

void AddCompanyDetails(companyDetails *company)
{
    fflush(stdin);
    printf("Company Details: ");
    printf("\n----------------------------\n");

    printf("Name: ");
    fgets(company->companyName, sizeof(company->companyName), stdin);
    company->companyName[strcspn(company->companyName, "\n")] = '\0';

    printf("Address: ");
    fgets(company->address, sizeof(company->address), stdin);
    company->address[strcspn(company->address, "\n")] = '\0';

    printf("Contact Number: ");
    fgets(company->contactNumber, sizeof(company->contactNumber), stdin);
    company->contactNumber[strcspn(company->contactNumber, "\n")] = '\0';
}

void AddCustomerDetails(customerDetails *customer)
{
    fflush(stdin);
    printf("\n\nPlease enter the Customer Information");
    printf("\n-----------------------------------------------\n");

    printf("Customer Name: ");
    fgets(customer->customerName, sizeof(customer->customerName), stdin);
    customer->customerName[strcspn(customer->customerName, "\n")] = '\0';

    printf("Customer ID: ");
    fgets(customer->customerID, sizeof(customer->customerID), stdin);
    customer->customerID[strcspn(customer->customerID, "\n")] = '\0';

    printf("Contact Number: ");
    fgets(customer->customerNumber, sizeof(customer->customerNumber), stdin);
    customer->customerNumber[strcspn(customer->customerNumber, "\n")] = '\0';
}

void AddProducts(product *items, int numOfItems)
{
    fflush(stdin);
    printf("\n\nEnter Item Details: ");
    printf("\n-----------------------\n");

    for (int i = 0; i < numOfItems; i++)
    {
        fflush(stdin);
        printf("\nItem %d: ", i + 1);
        printf("\n----------\n");

        printf("Name: ");
        fgets(items[i].itemName, sizeof(items[i].itemName), stdin);
        items[i].itemName[strcspn(items[i].itemName, "\n")] = '\0';

        printf("Price: ");
        scanf("%f", &items[i].price);

        printf("Quantity: ");
        scanf("%d", &items[i].quantity);
    }
}

void generateInvoice(companyDetails *company, customerDetails *customer, product *items, int numOfItems)
{
    printf("\n\nCalculating Invoice . . . \n\n");
    printf("Press Any Key to view generated Invoice . . . ");
    getch();
    system("cls");

    Beep(3000, 800);

    printf("\n----------------------------------\n");
    printf("\tInvoice Details");
    printf("\n----------------------------------\n");

    printf("Company Name: %s\n", company->companyName);
    printf("Company Address: %s\n", company->address);
    printf("Company Contact: %s\n\n", company->contactNumber);

    printf("Customer Name: %s\n", customer->customerName);
    printf("Customer ID: %s\n", customer->customerID);
    printf("Customer Contact: %s\n\n", customer->customerNumber);

    float totalAmount = 0.0;
    printf("Item Details: ");
    printf("\n--------------\n");
    for (int i = 0; i < numOfItems; i++)
    {
        printf("%d. %-15s  $%.2f x %d  =  $%0.2f\n", i + 1, items[i].itemName, items[i].price, items[i].quantity, items[i].price * items[i].quantity);
        totalAmount = totalAmount + items[i].price * items[i].quantity;
    }

    printf("\n-----------------------------------------------------\n");
    printf("\tTotal Payable Amount: $%0.2f", totalAmount);
    printf("\n-----------------------------------------------------\n");

    printf("\nInvoice Generated Successfully. Thank you for choosing Future Gen Corporations!\n");
    printf("Regards: Mohammad Arsalan Rather\n");
}

void writeInvoiceToFile(companyDetails *company, customerDetails *customer, product *items, int numOfItems)
{
    FILE *filePtr = fopen("billingData.txt", "a+");
    if (filePtr == NULL)
    {
        printf("Error occurred while writing data to file.\n");
        getch();
        return;
    }
    fprintf(filePtr, "%s", "\nInvoice Details");
    fprintf(filePtr, "%s", "\n-------------------------------------------\n");

    fprintf(filePtr, "Company Name: %s\n", company->companyName);
    fprintf(filePtr, "Company Address: %s\n", company->address);
    fprintf(filePtr, "Company Contact: %s\n\n", company->contactNumber);

    fprintf(filePtr, "Customer Name: %s\n", customer->customerName);
    fprintf(filePtr, "Customer ID: %s\n", customer->customerID);
    fprintf(filePtr, "Customer Contact: %s\n\n", customer->customerNumber);

    float totalAmount = 0.0;
    fprintf(filePtr, "%s", "Item Details ");
    fprintf(filePtr, "%s", "\n-------------------------------------------\n");

    for (int i = 0; i < numOfItems; i++)
    {
        fprintf(filePtr, "%d. %-10s $%.2f x %d  =  $%0.2f\n", i + 1, items[i].itemName, items[i].price, items[i].quantity, items[i].price * items[i].quantity);
        totalAmount = totalAmount + items[i].price * items[i].quantity;
    }

    fprintf(filePtr, "%s", "\n-------------------------------------------\n");
    fprintf(filePtr, "\tTotal Payable Amount: $%0.2f", totalAmount);
    fprintf(filePtr, "%s", "\n-------------------------------------------\n");
    
    printf("\nInvoice Saved Successfully. Thank you for choosing Future Gen Corporations!\n");
    printf("Regards: Mohammad Arsalan Rather\n\n");

    fclose(filePtr);
}
