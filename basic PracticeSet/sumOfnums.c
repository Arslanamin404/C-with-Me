// write a program to sum of natural nums.
#include <stdio.h>
#include <conio.h>
int main()
{
    int num,i = 1, sum = 0;
    printf("Find the sum of First n natural numbers.\n");
    printf("Enter num: ");
    scanf("%d", &num);
//using for loop.
    for (i = 1; i <= num; i++)
    {
        sum += i;
    }
    printf("Sum of first %d natural number using for loop is: %d",num, sum);
    
//using while loop.
    while (i<=num){
        sum+=i;
        i++;
    }
    
    printf("\n\nSum of first %d natural number using while loop is: %d",num, sum);
    getch();
    return 0;
}