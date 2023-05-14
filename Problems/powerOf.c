#include <stdio.h>
#include <math.h>
int main()
{
    float a , b;
    printf("Enter base: ");
    scanf("%f", &a);
    printf("Enter power: ");
    scanf("%f", &b);

    printf("%.f raised to the power %.f is: %.f",a,b, pow(a,b));
    return 0;
}