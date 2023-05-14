#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter Num1: ");
    scanf("%d", &a);
    printf("Enter Num2: ");
    scanf("%d", &b);
    printf("Enter Num3: ");
    scanf("%d", &c);

    if (a > b && a > c && b > c)
    {
        printf("Descending order is: %d %d %d", a, b, c);
    }
    else if (b > a && b > c && c > a){
        printf("Descending order is: %d %d %d", b, c , a);
    }
    else if (c > a && c > b && a > b){
        printf("Descending order is: %d %d %d", c , a , b);
    }
    else if (a > c && a > b && c > b){
        printf("Descending order is: %d %d %d", a , c , b);
    }
    else if (b > c && b > a && a > c){
        printf("Descending order is: %d %d %d", b , a , c);
    }
    else if (c > a && c > b && b > a){
        printf("Descending order is: %d %d %d", c , b , a );
    }
        return 0;
}