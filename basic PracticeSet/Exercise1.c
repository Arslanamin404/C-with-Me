#include <stdio.h>
//Q1. Print Multiplication table of number entered by user.
int main(){
int input;
printf("Enter the number you want to have multiplication table of : ");
scanf("%d",&input);

// printf("you entered %d", input);

printf("Multiplication Table of %d : \n", input);
for ( int i = 0; i <= 10; i++){
    int result = input*i;
    printf("%d x %d = %d \n",input, i, result);
}
    return 0;
}
