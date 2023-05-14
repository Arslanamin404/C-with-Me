#include <stdio.h>
int main()
{
/*
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You have entered %d as you age. \n ", age);
    if (age >= 18)
    {
        printf("You are eligible to vote.");
    }
    else if (age > 12)
    {
        printf("You are just a teenager");
    }
    else{
        printf("You are not eligible to vote.");
    }
*/

//QUIZ: Write a program to print the smallest number of two.
    int a, b;
    printf("Enter num1: ");
    scanf("%d", &a);
    printf("Enter num2: ");
    scanf("%d", &b);

    if (a<b){
        printf("%d is smaller than %d.", a,b);
    }
    else if(a>b){
        printf("%d is smaller than %d.",b ,a );
    }
    return 0;
}