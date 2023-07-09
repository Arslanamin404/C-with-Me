#include <stdio.h>
#include <conio.h>
void swap_callByReference(int *a, int *b);
void swap_callByValue(int a, int b);
int main()
{
   /*
UNDERSTAND SWAPING USING KITCHEN PROBLEM
YOU HAVE 2 GLASSES 1 OF WATER AND THE OTHER 1 OF MILK NOW YOU HAVE TO INTERCHAGE THE CONTAINER OF MILK AND WATER.
WE KNOW WE WILL REQUIRE 3RD GLASS TO INTERCHAGE THEIR CONTAINER AND SO ON.
*/

 printf("\n--------------------------------------\n");

    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("\nSwapping Call By Value\n");
    swap_callByValue(num1, num2);

    printf("\nCall by value does not change the value of original variables permanently.\nInstead it copies the value to function parameters.");
    printf("\nNum1: %d\nNum2: %d\n", num1, num2);

    printf("\nSwapping Call By Reference\n");
    swap_callByReference(&num1, &num2);

    printf("\nCall by Reference changes the value of original original value permanently. ");
    printf("\nNum1: %d\nNum2: %d\n", num1, num2);


    printf("\n-------------------------------------------------\n");
    getch();
    return 0;
}

void swap_callByValue(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Num1: %d\nNum2: %d\n", a, b);
}

void swap_callByReference(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("Num1: %d\nNum2: %d\n", *a, *b);
}