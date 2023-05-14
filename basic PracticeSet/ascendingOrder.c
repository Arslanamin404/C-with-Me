#include <stdio.h>
#include <conio.h>  //to get getch() function
int main()
{
    int a, b, c;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);

    if (a < b && a < c && b < c)
    {
        printf("Ascending order is : %d %d %d", a, b, c);
    }
    else if (b < a && b < c && a < c)
    {
        printf("Ascending order is : %d %d %d", b, a, c);
    }
    else if (c < a && c < b && a < b)
    {
        printf("Ascending order is : %d %d %d", c, a, b);
    }
    else if (a < b && a < c && c < b)
    {
        printf("Ascending order is : %d %d %d", a, c, b);
    }
    else if (b < a && b < c && c < a)
    {
        printf("Ascending order is : %d %d %d", b, c, a);
    }
    else if (c < b && c < a && b < a)
    {
        printf("Ascending order is : %d %d %d", c, b, a);
    }
    else if(a==b || b==c|| c==a){
        printf("Please enter 3 different number.");
    }
    getch();    //this will hold the screen after the completion of program. 
    return 0;
}