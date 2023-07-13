#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TEXT_COLOR_RED "\x1b[31m"
#define TEXT_COLOR_GREEN "\x1b[32m"
#define TEXT_COLOR_DEFAULT "\x1b[0m"

typedef struct
{
    int id;
    char name[41];
    int age;
} user;

void saveUserData(user *users, int numUsers);
void loadUserData(user *users, int numUsers);

int main()
{
    int numOfUsers;
    printf("Enter number of users: ");
    scanf("%d", &numOfUsers);

    // Dynamically allocate memory for the users array
    user *users = (user *)malloc(numOfUsers * sizeof(user));

    if (users == NULL)
    {
        printf("Failed to allocate memory.\n");
        return 1; // Exit the program with an error status
    }

    // Collect user data
    for (int i = 0; i < numOfUsers; i++)
    {
        printf("\nEnter details for User #%d\n", i + 1);

        printf("ID : ");
        scanf("%d", &users[i].id);
        fflush(stdin);

        printf("Name : ");
        fgets(users[i].name, sizeof(users[i].name) - 1, stdin);
        users[i].name[strcspn(users[i].name, "\n")] = '\0';

        printf("Age : ");
        scanf("%d", &users[i].age);

        printf("---------------------------------\n");
    }

    // Save user data to a binary file
    saveUserData(users, numOfUsers);

    printf("Press Enter to Load the User Data . . .\n");
    getchar(); // Read the newline character

    // Load user data from the binary file
    loadUserData(users, numOfUsers);

    // Free the dynamically allocated memory
    free(users);

    return 0;
}

// Function to save user data to a binary file
void saveUserData(user *users, int numUsers)
{
    FILE *filePtr = fopen("binaryFile.dat", "wb");
    if (filePtr == NULL)
    {
        // Print an error message if file opening fails
        printf(TEXT_COLOR_RED "Unable to open the file." TEXT_COLOR_DEFAULT);
        return;
    }

    // Write user data to the binary file
    size_t recordsWritten = fwrite(users, sizeof(user), numUsers, filePtr);
    if (recordsWritten != numUsers)
    {
        // Print an error message if the number of elements written is not equal to the expected number of users
        printf(TEXT_COLOR_RED "Error writing user data to binaryFile.dat." TEXT_COLOR_DEFAULT);
        return;
    }

    fclose(filePtr);

    printf(TEXT_COLOR_GREEN "User Data has been successfully saved to binaryFile.dat\n" TEXT_COLOR_DEFAULT);
}

// Function to load user data from a binary file
void loadUserData(user *users, int numUsers)
{
    FILE *filePtr = fopen("binaryFile.dat", "rb");
    if (filePtr == NULL)
    {
        // Print an error message if file opening fails
        printf(TEXT_COLOR_RED "Unable to open the file." TEXT_COLOR_DEFAULT);
        return;
    }

    // Read user data from the binary file
    size_t recordsRead = fread(users, sizeof(user), numUsers, filePtr);
    if (recordsRead != numUsers)
    {
        // Print an error message if the number of elements read is not equal to the expected number of users
        printf(TEXT_COLOR_RED "Error reading user data from binaryFile.dat." TEXT_COLOR_DEFAULT);
        return;
    }
    fclose(filePtr);

    printf(TEXT_COLOR_GREEN "User Data has been successfully loaded from binaryFile.dat\n" TEXT_COLOR_DEFAULT);

    // Print the loaded user data
    for (int i = 0; i < numUsers; i++)
    {
        printf("User #%d\n", i + 1);
        printf("ID : %d\n", users[i].id);
        printf("Name : %s\n", users[i].name);
        printf("Age : %d\n", users[i].age);
        printf("---------------------------------\n");
    }
}
