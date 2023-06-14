// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

void arrRev(char *arr)
{
    int length = strlen(arr);
    char temp;
    for (int i = 0; i < length / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[length - 1 - i];
        arr[length - 1 - i] = temp;
    }
}
int main()
{
    int size;
    printf("Enter size of string: ");
    scanf("%d", &size);
    fflush(stdin);

    char str[size];

    printf("String: ");
    gets(str);

    printf("\nOriginal string: %s\n",str);
    
    arrRev(str);

    printf("Reversed string: %s",str);

    return 0;
}