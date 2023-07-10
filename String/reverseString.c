#include <stdio.h>
#include <string.h>

// Function to reverse the characters in the array
void arrRev(char *arr)
{
    int length = strlen(arr);
    char temp;
    for (int i = 0; i < length / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[length - 1 - i];
        arr[length - 1 - i] = temp;
    }
}

int main()
{
    int size;
    printf("Enter size of string: ");
    scanf("%d", &size);
    fflush(stdin);

    char str[size];

    printf("String: ");
    fgets(str, sizeof(str)+1, stdin);   // sizeof(str)+1, to accommodate null character
    str[strcspn(str, "\n")] = '\0';     // Remove trailing newline character from fgets

    printf("\nOriginal string: %s\n", str);

    arrRev(str);   // Call the function to reverse the string

    printf("Reversed string: %s", str);

    return 0;
}
