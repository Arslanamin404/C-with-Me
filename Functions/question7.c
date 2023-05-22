// Write a function that takes a string as a parameter and returns the length of the string.
#include <stdio.h>
int strLen(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i - 1;    //it will also count null character that is why we used i-1
}

int main()
{

    char str[100];
    int stringSize;

    printf("Enter your String : ");
    fgets(str, 50, stdin);

    stringSize = strLen(str);

    printf("Size of string is %d", stringSize);
    return 0;
}