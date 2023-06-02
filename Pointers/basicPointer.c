#include <stdio.h>
int main()
{
    int z = 69;
    int *x = &z;
    printf("Address of z is %p.\n", x);

    /*
        * is called 'value at address' operator in c.
        *x would mean that the value at address stored in x is an integer.
        *x stores the address of z.
    */

    printf("Values of z using pointer is %d.\n", *x);

    return 0;
}