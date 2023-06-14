/*WAP using function which calculates the sum and average of two numbers. Use pointers and print the values of sum and average in main().
 */
#include <stdio.h>
#include <conio.h>
void sumAvg(int a, int b, int *sum, float *avg);
void main()
{
    int exit;
    do
    {
        printf("WAP using function which calculates the sum and average of two numbers.\nUse pointers and print the values of sum and average in main().\n");
        int num1, num2, sum;
        float avg;

        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);

        // function call
        sumAvg(num1, num2, &sum, &avg);

        // values has been changed permanently in memory using pointer
        printf("Sum of %d and %d is %d\n", num1, num2, sum);
        printf("Average of %d and %d is %.2f\n", num1, num2, avg);

        printf("\nDo you want to run again?\nPress any key to continue and 0 to exit: ");
        scanf("%d",&exit);
        if(exit == 0)
        {
            printf("\nThankYou user have a nice time ahead.\nVisit us again.\nRegards Mohammad Arsalan.\n");
        }
    } while (exit != 0);
    getch();
}

void sumAvg(int a, int b, int *sum, float *avg)
{

    // pointers are used to return multiple values from one function
    *sum = a + b;
    *avg = (float)*sum / 2; // typecasting
}