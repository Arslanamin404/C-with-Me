#include <stdio.h>
#include <conio.h>

int main()
{
    // Write C code here

    printf("This is a bubble sorting algorithm program: \n");
    int size;
    printf("Size of array: ");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nUnsorted Array");
    printf("\n------------------------------------------------\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    // bubbleSort
    int temp;

    for (int i = 0; i < size; i++)
    {
        printf("\n\nPass %d ", i + 1);
        printf("\n------------------------------------------------\n");
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
        for (int k = 0; k < size; k++)
        {
            printf("%d ", arr[k]);
        }
    }

    getch();
    return 0;
}