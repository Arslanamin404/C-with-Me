#include <stdio.h>
#include <conio.h>
typedef struct customerDetails
{
    int id;
    char name[41];
    char phoneNum[11];
} customer;

int main()
{
    int size;
    FILE *file, *csvFile;

    printf("This program will save your data to both CSV and txt format as physical file on your secondary storage.\n");

    printf("In this program you will be able to save data of your customers in csv and txt formats.\nUser will be asked to enter numeric ID of customer, Full Name of Customer, PhoneNumber of Customer (10 digits without country code).\n\n");

    printf("Number of customers: ");
    scanf("%d", &size);
    printf("\n----------------------------------------------------------------------------------------------------------\n\n");
    customer person[size];
    
    
    // from now onwards will use append mode as some of the data has been already added in file.
    file = fopen("main.txt", "a+");
    csvFile = fopen("main.csv", "a");

    if (file == NULL || csvFile == NULL)
    {
        printf("Failed to open the file.\n");
        return 1;
    }

    fprintf(file, "\nThis customer data has been generated from C program using File IO operations.\nTotal customers added today: %d\n", size);

    fprintf(csvFile, "\nThis customer data has been generated from C program using File IO operations.\nTotal customers added today: %d\n", size);
    fprintf(csvFile, "S.No,ID,Name,PhoneNumber\n");

    for (int i = 0; i < size; i++)
    {
        printf("Details of Customer %d: ",i+1);
        printf("\n----------------------------\n");

        printf("ID: ");
        scanf("%d", &person[i].id);
        fflush(stdin);

        printf("Name: ");
        gets(person[i].name);

        printf("PhoneNumber: ");
        gets(person[i].phoneNum);

        printf("\n-------------------------------------------------------------------------\n\n");

        fprintf(file, "ID: %d\tName: %s\tPhoneNumber: %s\n", person[i].id, person[i].name, person[i].phoneNum);
        fprintf(csvFile, "%d,%d,%s,%s\n",i+1, person[i].id, person[i].name, person[i].phoneNum);
    }

    fclose(file);
    fclose(csvFile);

    printf("Results saved to text and CSV file successfully!\n\n");
    getch();
    return 0;
}
