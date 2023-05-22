/*
Write a function that takes an array of integers and its size as parameters.
calculates the average of all the elements in the array. Return the average as a float
*/
#include <stdio.h>

float avgOfArray(int arr[], int size)
{
    float sum = 0;
    float avg;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    avg = sum / size;
    return avg;
}
int main()
{
    printf("\n\n---------------------------------------------------------------\n");    
    
    printf("Welcome to the average calculator.");
    
    printf("\n---------------------------------------------------------------\n");

    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("---------------------------------------------------------------\n");

    float average;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("---------------------------------------------------------------\n");
    
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    
    printf("\n---------------------------------------------------------------\n\n");

    average = avgOfArray(arr, size); //function call

    printf("The average of all the elements of the array is: %.2f ", average);

    printf("\n\n---------------------------------------------------------------\n\n");

    return 0;
}
