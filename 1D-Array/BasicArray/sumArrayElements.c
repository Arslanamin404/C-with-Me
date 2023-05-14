#include <stdio.h>
#include <conio.h>
int main()
{
    // find sum of array elements
    int size;
    printf("Enter the size of an array: ");
    scanf("%d", &size);
    float x[size], total = 0;
    // Reading values
    printf("Enter %d real numbers below: \n", size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter the value of index %d: ", i);
        scanf("%f", &x[i]);
    }
    for (int i = 0; i < size; i++)
    {
        total = total + x[i];
    }
    for (int i = 0; i < size; i++)
    {
        // this loop is for formatting the output
        printf("x[%d] = %0.2f\n", i, x[i]);
    }
    printf("\nTotal = %0.2f", total);
    getch();
    return 0;
}