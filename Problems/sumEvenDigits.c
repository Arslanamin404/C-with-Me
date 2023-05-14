// WAP to print the sum of all the even digits of a number.
#include <stdio.h>
int main()
{
    // Algorithm and logic on NoteBook.
    int n, sum = 0, lastDigit;
    printf("Enter number:");
    scanf("%d", &n);

    while (n != 0)
    {
        lastDigit = n % 10;
        if (lastDigit % 2 == 0){
            sum = sum + lastDigit;
        }
        n = n / 10;
    }
    printf("Sum of even digits is %d.", sum);
    return 0;
}