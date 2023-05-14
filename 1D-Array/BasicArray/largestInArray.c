#include <stdio.h>
#include <conio.h>
int main()
{
    int size;
    printf("Size of Array: ");
    scanf("%d", &size);

    int arr[size], large;
    
    //taking input
    for (int i = 0; i < size; i++)
    {
        printf("Enter num%d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    // We will assume arr[0] to be the larger in array and compare other elements with it
    large = arr[0];
    
    // we will initialize loop from 1 because we assumed arr[0] as large.
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
        }
    }
    printf("Largest value in an Array is %d", large);
    getch();
    return 0;
}