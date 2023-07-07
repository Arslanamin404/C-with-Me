/*
 * WAP that dynamically allocates memory for a string using malloc.
 * Prompt the user to enter a string and store it in the allocated memory.
 * Print the entered string.
 */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int len;
    printf("Length of string: ");
    scanf("%d", &len);
    fflush(stdin);

    char *string = (char *)malloc((len + 1) * sizeof(char));

    if (string == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1; // Exit the program with an error status
    }
    else
    {
        printf("Memory Allocated successfully.\n\n");
    }

    printf("Enter your String : ");
    fgets(string, len + 1, stdin);

    printf("Your string was: \"%s\" \n\n", string);

    free(string);

    //! This ternary operator will check whether the memory is free from heap or not.
    (string == NULL) ? printf("Memory freed from heap segment successfully.\n") : printf("Memory is not freed from heap segment yet.\n");

    getch();
    return 0;
}
