#include <stdio.h>
#include <conio.h>
#define size 50
int main()
{
    int arr[size];
    int temp, i, j, n;

    printf("Array size = ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("input num%d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nArray Before sorting\n----------------\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // Logic for descending order

    for (i = 0; i < n; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\n\nArray Sorted in descending order.\n------------------------\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}