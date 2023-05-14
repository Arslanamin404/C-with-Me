// write a program to calculate the sum of nums occurring in multiplication table of 8 from (1-10).
#include <stdio.h>
#include <conio.h>
int main()
{
    int a = 8, j, i, result, sum;
    for (i = 1; i <= 10; i++)
    {
        result = a * i;  //this will print table of 8.

        for (j = 1; j<=1 ; j++)
        {
            sum = sum + result;
        }
    }
    printf("sum of multiples of 8 from 1-10 is: %d", sum);
    getch();
    return 0;
}