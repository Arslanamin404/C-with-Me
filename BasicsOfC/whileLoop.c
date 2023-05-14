#include <stdio.h>
int main()
{
    int i = 1;
    printf("Even numbers from 1-20 are given below: \n");
    while (i <= 20)
    {
        if (i % 2 == 0)
        {
            printf("%d\t", i);
        }
        i++;
    }

    // print nums from 10 -20 when initial loop counter is 0.

    int a = 0;
    while (a <= 20)
    {
        if (a >= 10)
        {
            printf("\nValue of a is: %d", a);
        }
        a++;
    }

    return 0;
}
