//WAP to check if a number is armstrong or not.
#include <stdio.h>
#include <math.h>
int main()
{
    int num, lastDigit, sum=0,originalVal;
    printf("Enter number: ");
    scanf("%d", &num);
    
    // originalVal = num; bex jab hum comparison karay tou wou comparison original number k saath hou,kyu ki num ki value to change horahi hai.
    
    originalVal = num;
//value of original number is stored in originalVal variable.

    while (num != 0)
    {
        lastDigit = num % 10;
        sum = sum + pow(lastDigit, 3);
        num = num / 10;
    }
    if(originalVal == sum){
        printf("%d is an Armstrong Number",originalVal);
    }
    else{
        printf("%d is not an Armstrong Number",originalVal);
    }
    return 0;
}