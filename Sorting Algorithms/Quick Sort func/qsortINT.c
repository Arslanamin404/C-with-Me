#include <stdio.h>
#include <stdlib.h>
// #include <conio.h>

void readArr(int *arr, int size);
void printArr(int *arr, int size);
int comparerInt(const void *pA, const void *pB);
// p1 and p2 are pointer to the elements to be compared.

int main()
{
    int size;
    printf("Size of Array: ");
    scanf("%d", &size);

    int arr[size];

    readArr(arr, size);

    printf("\nElements of Array before sorting: \n\n");
    printArr(arr, size);

    qsort(arr, size, sizeof(int), comparerInt); // from stdlib.h

    printf("\n\nElements of Array after sorting using qsort(): \n\n");
    printArr(arr, size);

    // getch();
    return 0;
}

void readArr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

int comparerInt(const void *pA, const void *pB)
{
    /*
       pA and pB are pointer to the elements to be compared. Return value of the function will effect the sorting order.
       The comparator function should only return the following values:
       (< 0):less than zero, if p1 should come before p2 in a sorted array.
       (0): Zero, if p1 is equivalent to p2.
       (> 0): Greater than zero, if p1 should come after p2 in a sorted array.
   */

    //   One liner:
    return *(int *)pA - *(int *)pB;

    /*
    Another way of doing the same
        typecasting from void pointer to int pointer
        const int *p1 = pA;
        const int *p2 = pB;
        return *p1 - *p2;
    */
    /*
    Aether way of doing the same
        int *A = (int *)pA;
        int *B = (int *)pB;
        return *A - *B;
    */

    /*
    Aether way of doing the same
        int A = *(int *)pA;
        int B = *(int *)pB;
        return A - B;
    */
}

void printArr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}