#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int size, *arr;
    printf("Size of Arr: ");
    scanf("%d", &size);

    arr = (int *)malloc(size * sizeof(int));
    /*
    (int *) means to typeCast the output generated from malloc to int pointer.
        to malloc() func we need to pass the number of bytes to allocate in memory.
        By doing so it allocates the bytes and returns the base address of the allocated memory chunk as a VOID pointer.
        We need to convert (typecast) the void pointer into an int pointer, as we know operations can not be done on void pointers.
    */
    for (int i = 0; i < size; i++)
    {
        arr[i] = i * i;
        printf("%d\n", arr[i]);
    }
    getch();
    return 0;
}
