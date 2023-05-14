//WAP to print the sum of digits of a number.
#include <stdio.h>
int main()
{
    //Algorithm and logic on NoteBook.
    int n, sum = 0, lastDigit;
    printf("Enter number:");
    scanf("%d", &n);

    while (n != 0)
    {
        lastDigit = n % 10;
        sum = sum + lastDigit;
        n = n / 10;
    }
    printf("Sum of digits is %d.", sum);
    return 0;
}