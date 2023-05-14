#include <stdio.h>
#include <conio.h>
int main()
{
    int size;
    printf("Size of Array: ");
    scanf("%d", &size);
    int arr[size],sum=0;
    for (int i = 0; i < size; i++)
    {
        printf("Enter value of index %d: ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 2; i < size; i = i + 2)
    {
        sum=sum+arr[i];
    }
    printf("Sum of values at even indexes = %d", sum);
    getch();
    return 0;
}