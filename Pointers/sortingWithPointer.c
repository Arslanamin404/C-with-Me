#include <stdio.h>
void selectionSort(int size, int *arr);

int main()
{
    int arr[] = {12, 34, 54, 2, 453, 132, 49, -1, 89, 510};
    // Calculate the size of the array
    int size = sizeof(arr) / sizeof(int);

    printf("---------------\nUnsorted Array\n---------------\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n\n------------------------\nSorted Array using Pointer\n------------------------\n");
    selectionSort(size, arr);
    printf("\n\n");
    return 0;
}

// Function to perform selection sort on the array
void selectionSort(int size, int *arr)
{
    int temp;
    // Outer loop: Iterate through the array from the beginning to the second-to-last element
    for (int i = 0; i < size - 1; i++)
    {
        // Inner loop: Iterate through the array starting from the next element after i
        for (int j = i + 1; j < size; j++)
        {
            // Compare the elements at index i and index j using pointers
            // If the element at index i is greater than the element at index j, swap them
            if (*(arr + i) > *(arr + j))
            {
                // Swap the elements
                temp = *(arr + j);
                *(arr + j) = *(arr + i);
                *(arr + i) = temp;
            }
        }
    }

    // Print the sorted array
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(arr + i));
    }
}
