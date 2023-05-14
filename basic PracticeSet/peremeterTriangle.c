#include <stdio.h>
//Program to calculate perimeter of rectangle. Taking length and breadth from user.

int main(){
int a,b,perimeter;
printf("Calculate the perimeter of Triangle.\n");

printf("Enter the Length : ");
scanf("%d",&a);

printf("Enter the Breadth : ");
scanf("%d",&b);

perimeter = 2*(a+b);

printf("Perimeter of triangle with length %d and breadth %d is %d ", a,b,perimeter);
    return 0;
}
