#include <stdio.h>
//Q1. Write a program to check whether a number is even or odd.
int main (){
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);

    if(num % 2 == 0){
        printf("%d is a even number", num);
    }
    else{
        printf("%d is a odd number",num);
    }
//Q2. Print "You can Drive" or "You can not drive" based on age being greater than 18.
    int age;
    printf("\nEnter your age: ");
    scanf("%d",&age);

    if(age >=18){
        printf("You can drive");
    }
    else{
        printf("You can not drive");
    }
}