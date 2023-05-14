#include <stdio.h>
#include <conio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    // Condition? if true : if false;
    (age >= 18) ? printf("You can Drive.") : printf("You cannot Drive.");
    getch();
    return 0;
}