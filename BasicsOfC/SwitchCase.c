#include <stdio.h>
int main()
{
/*
    char age;
    printf("Enter your age: ");
    scanf("%d", &age);

    switch (age)
    {
    case 3:
        printf("your age is 3.");
        break;
    case 13:
        printf("your age is 13.");
        break;
    case 23:
        printf("your age is 23.");
        break;
    case 33:
        printf("your age is 33.");
        break;

    default:
        printf("your age is not 3 , 13, 23 or 33.");
        break;
    }
*/
    int day;
    printf("Enter day number: ");
    scanf("%d", &day);

    switch(day){
        case 1:
        printf("Monday");
        break;
        
        case 2:
        printf("Tuesday");
        break;
        
        case 3:
        printf("Wednesday");
        break;
        
        case 4:
        printf("Thursday");
        break;
        
        case 5:
        printf("Friday");
        break;
        
        case 6:
        printf("Saturday");
        break;
        
        case 7:
        printf("Sunday");
        break;

        default:
        printf("Please enter a Valid Input! There are only 7 days in a week.");
        break;
    }
    return 0;
}