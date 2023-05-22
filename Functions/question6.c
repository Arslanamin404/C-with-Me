/*WAFunc that takes an array of integers and its size as parameters, returns the maximum element in the array.
*/
#include <stdio.h>
int findMaxArr(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Largest Element of array is %d.", findMaxArr(arr, size));
    return 0;
}