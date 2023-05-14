#include <stdio.h>
int main()
{
    int size;
    printf("Size of an Array: ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter num%d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Reverse of Array: ");
    //size-1,because index starts from 0;
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}