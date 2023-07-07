/*
 * WAP to dynamically allocate the memory for an array of integers.
 * Then use realloc() to increase the size of the array and add more elements to it.
 */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

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

    printf("\n------------------------------------------------------\n\n");

    printf("%d elements are: ", size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n\n------------------------------------------------------\n");

    int choice;
    printf("\n\nPlease Select an Action ----->\n\nDo you want to add / remove more elements?\n");
    printf("ADD elements \t[1]\nRemove elements [2]\nExit \t\t[0]\n\n");
    printf("Please Enter Your Choice (1/2/0): ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        //! Resize the array to accommodate more elements
        int addElements;
        printf("\nNumber of elements to be added: ");
        scanf("%d", &addElements);

        int *resizedArr = (int *)realloc(arr, addElements * sizeof(int));

        if (resizedArr == NULL)
        {
            // Handling memory reallocation failure
            printf("\nMemory Reallocation Failed.\n\n");
            return 1;
        }
        else
        {
            printf("\nMemory Reallocated Successfully.\n");
            arr = resizedArr; // assigning the  reallocated address

            printf("\n-------------------------------------------------\n\n");

            // Enter additional elements
            printf("Enter %d more elements: ", addElements);
            for (int i = size; i < (size + addElements); i++)
            {
                scanf("%d", &arr[i]);
            }

            // Printing all elements of resized array
            printf("\n%d elements are: ", size + addElements);
            for (int i = 0; i < (size + addElements); i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n-------------------------------------------------\n\n");
        }
        
    }
    else if (choice == 2)
    {
        int removeElements;
        printf("\nNumber of elements to be removed: ");
        scanf("%d", &removeElements);

        if (removeElements > size)
        {
            printf("Cannot remove more elements than the current size.\n\n");
            for (int i = 1; i < 3; i++)
            {
                Beep(3000, 300);
            }
            return 1;
        }

        int *resizedArr = (int *)realloc(arr, removeElements * sizeof(int));

        if (resizedArr == NULL)
        {
            // Handling memory reallocation failure
            printf("\nMemory Reallocation Failed.\n\n");
            return 1;
        }
        else
        {
            printf("\nMemory Reallocated Successfully.");
            arr = resizedArr; // assigning the  reallocated address

            printf("\n-------------------------------------------------\n");

            // Printing all thr elements of resized array
            printf("\n%d elements are: ", size - removeElements);
            for (int i = 0; i < (size - removeElements); i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n-------------------------------------------------\n\n");
        }
        
    }

    else
    {
        printf("\n\nExiting the program . . .\nThankYOu Have a nice time ahead.\n");
        getch();
        return 1;
    }
    
    getch();
    free(arr);
    return 0;
}
