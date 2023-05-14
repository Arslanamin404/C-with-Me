#include <stdio.h>
int main()
{

    char myStr[20];
    printf("Your input must not exceed maximum of 10 characters.\n");
    printf("-------------------------------------------------\n");

    printf("ENter you name: ");
    gets(myStr);

    printf("Hello %s, welcome to this program.", myStr);
    return 0;
}

