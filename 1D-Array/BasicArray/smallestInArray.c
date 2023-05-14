#include <stdio.h>
#include <conio.h>
int main()
{
    int size;
    printf("Size of Array: ");
    scanf("%d", &size);
    int arr[size], small;

    for (int i = 0; i < size; i++)
    {
        printf("Enter num%d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    // we will assume arr[0] to be smallest
    small = arr[0];

    // we will initialize i=1 bex arr[0] is assumed to be smallest.
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
        }
    }
    printf("Smallest value in an Array is %d", small);
    getch();
    return 0;
}