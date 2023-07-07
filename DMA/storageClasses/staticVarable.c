#include <stdio.h>
#include <stdlib.h>

/*
 * Static variables are variables which have a property of preserving their values even when they go out of space.
 * They preserve their values from the previous scope and are not reinitialized.
 * Static variables remains in memory throughout the span of program.
 * Static variables are initialized to 0 if not initialized.
 * In C, static variables can only be initialized using constants.
*/

void staticFunc()
{
    // static int myVar = 1;
    static int myVar;
    printf("Value of static variable is %d\n", myVar);
    myVar++;
}
int main()
{
    system("cls");
    printf("\n\nHello Testing TESTING . . . \n\n");
    
    staticFunc();
    staticFunc();
    staticFunc();
    staticFunc();
    staticFunc();
    staticFunc();
    staticFunc();
    staticFunc();
    staticFunc();
    return 0;
}
