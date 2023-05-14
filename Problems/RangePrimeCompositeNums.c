#include <stdio.h>
int main()
{
    int startNum, endNum, i, factor, j;
    // if we initialize factor = 0 here, then it will only print first prime number which lies in that range.

    printf("Enter starting number: ");
    scanf("%d", &startNum);

    printf("Enter ending number: ");
    scanf("%d", &endNum);
    // LOGIC:
    //  First we want to print all nums from starting to ending number.
    //  then it must check whether the numbers present in range are prime or not, if they are prime print them.

    printf("Prime Numbers form %d to %d are: ", startNum, endNum);
    for (i = startNum + 1; i <= endNum; i++) // this will print all the numbers in range.
    {
        if (startNum < 0 || endNum < 0)
        {
            printf("humko itna Gyaan prapt nahi hua hai #bePositive.");
            break;
        }
        // By initializing factor = 0 inside the loop it print all the prime numbers present in that range.
        factor = 0;
        // i/2 because no number has a factor greater than its half.
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0) // if i is divisible by j, then it will not be a prime number.
            {
                factor = factor + 1;
                break;
            }
        }
        if (factor == 0 && i != 1 && i != 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n \nComposite Numbers from %d to %d are: ", startNum, endNum);
    for (i = startNum; i <= endNum; i++)
    {
        factor = 0;

        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                factor = factor + 1;
                break;
            }
        }

        if (factor != 0 && i != 1 && i != 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
