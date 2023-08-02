#include <stdio.h>
#include <conio.h>
#define size 100
int main()
{
    int arr[size], temp, n;
    printf("Enter Array size (>100): ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Num%d = ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nArray Before sorting\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n------------------------------\n");

    // MAIN LOGIC

    for (int i = 0; i < n-2; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                // swapping nums
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Array sorted in Ascending order\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n------------------------------\n\n");
    getch();
    return 0;
}