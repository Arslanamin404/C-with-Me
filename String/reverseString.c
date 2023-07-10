#include <stdio.h>
#include <string.h>

void strRev(char *str)
{
    int length = strlen(str);
    char temp;
    for (int i = 0; i < length / 2; i++)
    {
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
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
    
    strRev(str);

    printf("Reversed string: %s",str);

    return 0;
}