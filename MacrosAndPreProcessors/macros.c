/*
* *********************************Macros & Pre-processor Directives.*********************************
! Macros:
* Macros are defined using the #define directive and are used to create symbolic constants or to perform text
* substitution. When the compiler encounters a macro name in the code, it replaces it with the corresponding value
* or expression defined by the macro.
*/
#include <stdio.h>

#define PI 3.14159
#define SQUARE(x) ((x) * (x))

int main()
{
    double radius = 5.0;
    double area = PI * SQUARE(radius);

    printf("Area of the circle: %lf\n", area);

    return 0;
}
