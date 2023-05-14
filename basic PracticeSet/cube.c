#include <stdio.h>
#include<conio.h>
int main(){
    int a,cube;
    printf("Find the cube of numbers.\n ");
    printf("Enter Number: ");
    scanf("%d",&a);
    cube = a*a*a;
    printf("Cube of %d is: %d\n",a,cube);
    getch();
    return 0;
}
