/*
write a program to find whether the character entered by user is in upperCase or in lowerCase.
*/
// check ASCII values to solve.
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter Character:");
    scanf("%c", &ch);
    if (ch <= 90 && ch >= 65)
    {
        printf("UPPERCASE");
    }
    else if (ch <= 122 && ch >= 97)
    {
        printf("LOWERCASE");
    }
    else
    {
        printf("Its neither uppercase nor lowercase character.");
    }
    return 0;
}