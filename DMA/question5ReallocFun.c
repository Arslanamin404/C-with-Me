/*
 * WAP to dynamically allocate the memory for an array of integers.
 * Then use realloc() to increase the size of the array and add more elements to it.
 */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int size;
    printf("Length of array: ");
    scanf("%d", &size);

    int *arr = (int *)malloc(size * sizeof(int));

    if (arr == NULL)
    {
        // Handling memory allocation failure
        printf("\nMemory Allocation Failed.\n\n");
        return 1;
    }
    else
    {
        printf("\nMemory Allocated Successfully.\n\n");
    }

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\n%d elements are: ", size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n------------------------------------------------------\n");

    int choice;
    printf("Do you want to add more elements?\nEnter 1 for YES and 0 for NO (1/0): ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        //! Resize the array to accommodate more elements
        int newSize;
        printf("\nEnter new size: ");
        scanf("%d", &newSize);

        int *resizedArr = (int *)realloc(arr, newSize * sizeof(int));

        if (resizedArr == NULL)
        {
            // Handling memory reallocation failure
            printf("\nMemory Reallocation Failed.\n\n");
            return 1;
        }
        else
        {
            printf("\nMemory Reallocated Successfully.\n\n");
            arr = resizedArr; // assigning the  reallocated address

            // Enter additional elements
            printf("Enter %d more elements: ", newSize);
            for (int i = size; i < (size + newSize); i++)
            {
                scanf("%d", &arr[i]);
            }

            // Printing all elements of resized array
            printf("\n%d elements are: ", size + newSize);
            for (int i = 0; i < (size + newSize); i++)
            {
                printf("%d ", arr[i]);
            }
        }
    }
    else
    {
        printf("\n\nExiting the program . . .\nThankYOu Have a nice time ahead.\n");
        return 1;
    }

    free(arr);
    return 0;
}
