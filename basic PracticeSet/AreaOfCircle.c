#include <stdio.h>
#include<conio.h>
#include <math.h>
#define Pi 3.14

int main()
{
    float radius;
    printf("Enter radius of circle in cms: ");
    scanf("%f", &radius);

    printf("Area = %0.2f", Pi * pow(radius,2)); //to use pow function we need to include math.h library.
    getch();
    return 0;
}