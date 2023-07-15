#include <stdio.h>

int main()
{
    int size = 5;
    int arr[size];
    printf("Enter 5 numbers: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nElements are: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    int dltNum;
    printf("\nEnter a number to delete: ");
    scanf("%d", &dltNum);

    int i, index, found = 0; // Variable for iteration, index, and flag for number found
    for (i = 0; i < 5; i++)
    {
        if (arr[i] == dltNum)
        {
            found = 1; // Set the flag to 1 if the number is found
            break;
        }
    }
    if (found)
    {
        for (int j = i; j < size - 1; j++)
        {
            arr[j] = arr[j + 1]; // Shift elements to the left to overwrite the deleted element
        }
        size--; // Reduce the size of the array

        printf("\nElement %d deleted successfully!\n", dltNum);

        printf("Remaining elements: ");
        for (int i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    else
    {
        printf("\nNumber %d not found in the array.\n", dltNum);
    }

    return 0;
}
