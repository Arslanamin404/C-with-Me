#include <stdio.h>
#include <conio.h>
int main()
{
    int size;
    printf("Size of Array: ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter value of index %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\n\nValues at odd index are: \n");
    for (int i = 1; i < size; i = i + 2)
    {
        printf("Value of index [%d] = %d\n", i, arr[i]);
    }
    getch();
    return 0;
}