// Accessing elements of arrays using Pointer
#include <stdio.h>
#include <conio.h>
int main()
{
    int arr[6] = {2, 3, 12, 8, 92, 14};
    printf("\nAccessing elements of arrays using Pointer: \n");
    for (int i = 0; i < 6; i++)
    {
        // We know name of array gives us the address of first element.
        printf("Address of %dth element = %u and value of Element = %d.\n", i, &arr[i], *(arr + i));
    }
    getch();
    return 0;
}