//WAP to print armstrong numbers from 1 - 500.
#include <stdio.h>
int main()
{
    int lastDigit, num, sum;
    printf("Armstrong Numbers from 1 to 500 are: ");
    for (int i = 1; i <= 500; i++)
    {
        sum = 0;
        num = i;
        while (num != 0)
        {
            // 157 = 1^3 + 5^3 + 7^3 => 157
            lastDigit = num % 10;
            sum = sum + (lastDigit * lastDigit * lastDigit);
            num = num / 10;
        }
        if (sum == i)
        {
            printf("%d ", i);
        }
    }
    return 0;
}