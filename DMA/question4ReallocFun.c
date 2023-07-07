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
        printf("\nEnter new size: ");
        scanf("%d", &size);

        arr = (int *)realloc(arr, size * sizeof(int));

        if (arr == NULL)
        {
            printf("\nMemory Reallocation Failed.\n\n");
            return 1;
        }
        else
        {
            printf("\nMemory Reallocated Successfully.\n\n");
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
    }
    else
    {
        printf("\nThankYOu\n");
        return 1;
    }

    return 0;
}
