#include <stdio.h>
#include <conio.h>
#define size 100
int main()
{
    int n, temp;
    int a[size];
    /* Here 100 sequential memory locations are allocated to this array.
       size = 100,
       4*100=400bytes
   */
    printf("\nActual size of array = %d\n", size);
    printf("Enter size of Array (less than 100): ");
    scanf("%d", &n);

    /*  1 int = 4bytes
        100 int = 4*100 => 400bytes
    */
    printf("\n\n%d memory locations and %d bytes are unused in memory.\n", 100 - n, (100 * 4) - n * 4);
    // printf("%d bytes are unused in memory.\n", (100 * 4) - n * 4);
    printf("This unused memory is wasted as it can not be assigned to anything else.This is the major drawback of Arrays [Static Memory Allocation].\n\n");

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Array Elements before sorting \n");
    for (int i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("\n\nPass %d ", i + 1);
        printf("\n------------------------------------------------\n");

        for (int j = i + 1; j < n; j++)
        {
            printf("\n is %d > %d then swap: ", a[i], a[j]);
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            for (int k = 0; k < n; k++)
            {
                printf("%4d", a[k]);
            }
            getch();
        }
    }
    getch();
    return 0;
}