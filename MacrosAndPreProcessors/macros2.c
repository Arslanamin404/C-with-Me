/*
? some commonly used preprocessor directives:
* #include: Used to include header files in the source code.
* #ifdef, #ifndef, #else, #endif: Used for conditional compilation based on macro definitions.
* #if, #elif, #else, #endif: Used for conditional compilation based on constant expressions.
* #pragma: Used to provide additional instructions to the compiler.
*/

#include <stdio.h>
#define ENABLE_FEATURE_A

int main()
{
    printf("This is a sample program.\n");

#ifdef ENABLE_FEATURE_A
    printf("Feature A is enabled.\n");
#else
    printf("Feature A is disabled.\n");
#endif

#ifdef ENABLE_FEATURE_B
    printf("Feature B is enabled.\n");
#else
    printf("Feature B is disabled.\n");
#endif

    return 0;
}