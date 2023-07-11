#include<stdio.h>
#include<conio.h>

//_WIN32 ,  __linux__  and   __APPLE__  are predefined macros provided by compiler
#if defined(_WIN32)
    #define PLATFORM_WINDOWS
#elif defined(__linux__)
    #define PLATFORM_LINUX
#elif defined(__APPLE__)
    #define PLATFORM_MAC
#else
// #error is used to generate an compilation error
    #error Unsupported Platform
#endif

// PLatform specification header files inclusion
#ifdef PLATFORM_WINDOWS
    #include<windows.h>
#elif defined(PLATFORM_LINUX)
    #include <unistd.h>
#endif

int main()
{
    // Platform specification code
    #ifdef PLATFORM_WINDOWS
        printf("Running on WINDOWS.\n");
    #elif defined(PLATFORM_LINUX)
        printf("Running on LINUX.\n");
    #elif defined(PLATFORM_MAC)
        printf("Running on MAC.\n");
    #else
        printf("Unsupported Platform.\n");
    #endif

    getch();
    return 0;
}