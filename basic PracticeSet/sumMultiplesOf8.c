// write a program to calculate the sum of nums occurring in multiplication table of 8 from (1-10).
#include <stdio.h>
#include <conio.h>
int main()
{
    int result = 0, sum =0;
    for (int i = 1; i <= 10; i++)
    {
        result = 8 * i;  //this will print table of 8.

        sum += result;
    }
    printf("sum of multiples of 8 from 1-10 is: %d", sum);
    getch();
    return 0;
}