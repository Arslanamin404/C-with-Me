#include <stdio.h>
#include <stdlib.h>
/*
 * malloc()
 * calloc()
 * realloc()
 * free()
 * All these functions are defined in stdlib.h
 */
int main()
{
    system("cls");

    int size;
    printf("Length of array: ");
    scanf("%d", &size);

    //* USE OF malloc()
    //* All the values to the allocated memory are initialized to GARBAGE VALUES

    printf("\nUsing malloc function\n");
    int *arr;
    arr = (int *)malloc(size * sizeof(int)); //* Allocating memory dynamically

    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("\nEnter %d elements:\n", size);
    for (int i = 0; i < size; i++)
    {
        printf("Value %d is: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nElements are: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);

    printf("\n\n-----------------------------------------------\n\n");

    //* USE OF calloc()
    //* All the values to the allocated memory are initialized to ZERO

    printf("\nUsing calloc function\n");

    int *arr2 = (int *)calloc(size, sizeof(int));

    if (arr2 == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("\nEnter %d elements:\n", size);
    for (int i = 0; i < size; i++)
    {
        printf("Value %d is: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    printf("\nElements are: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr2[i]);
    }

    // free(arr2);

    printf("\n\n-----------------------------------------------\n\n");


    //* USE OF realloc
    //* we will reallocate memory that was previously assigned using calloc function.

    printf("Using realloc function\n\n");
    
    int newSize;
    printf("Enter new length of array: ");
    scanf("%d", &newSize);

    arr2 = (int *)realloc(arr2, newSize * sizeof(int));

    if (arr2 == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("\nEnter %d elements:\n", size);
    for (int i = 0; i < newSize; i++)
    {
        printf("Value %d is: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    printf("\nElements are: ");
    for (int i = 0; i < newSize; i++)
    {
        printf("%d ", arr2[i]);
    }

    free(arr2);

    return 0;
}
