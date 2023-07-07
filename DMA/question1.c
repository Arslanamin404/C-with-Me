/*
! Dynamic Memory Allocation
* WAP  to dynamically allocate memory for an integer using malloc and assign value to it.
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    system("cls");
    int *num = (int *)malloc(1 * sizeof(int));

    if (num == NULL)
    {
        printf("Memory allocation Failed. Exiting the program. . . \n");
        return 1;
    }
    else
    {
        printf("Memory Allocated successfully.\n\n");
    }

    *num = 32;
    printf("Value assigned is %d.\n", *num);

    printf("Assign a new value to an integer: ");
    scanf("%d", &num);
    printf("New Value assigned is %d.\n", num);

    free(num);

    printf("\n------------------------------------------------------------------\n\n");

    /*
     * Write a program that dynamically allocates memory for an array of integers using calloc.
     * It prompts the user to enter values for the array elements.
     */
    int size;
    printf("Length of array: ");
    scanf("%d", &size);

    int *arr = (int *)calloc(size, sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation Failed. Exiting the program. . . \n");
        return 1;
    }
    else
    {
        printf("Memory Allocated successfully.\n\n");
    }

    printf("Enter elements of array: \n");
    for (int i = 0; i < size; i++)
    {
        printf("Value %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\n------------------------------------------------------------------\n\n");

    for (int i = 0; i < size; i++)
    {
        printf("Value %d = %d\n", i + 1, arr[i]);
    }

    free(arr);

    printf("\n------------------------------------------------------------------\n\n");

    getch();

    return 0;
}
