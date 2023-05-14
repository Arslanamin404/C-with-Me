// WAP to print the sum of the given number and its reverse.
#include <stdio.h>
int main()
{
    int num, originalNum, reverseNum = 0, sum;
    printf("Enter Number: ");
    scanf("%d", &num);

    originalNum = num;
    while (num != 0)
    {
        reverseNum = reverseNum * 10;
        reverseNum = reverseNum + (num % 10);
        num = num / 10;
    }
    printf("Reverse Number: %d\n", reverseNum);
    
    sum = originalNum + reverseNum;

    printf("The sum of original number %d and reverse number %d is %d.", originalNum, reverseNum, sum);

    return 0;
}