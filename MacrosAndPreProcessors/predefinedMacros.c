#include <stdio.h>
#include <conio.h>
int main()
{
    //* current date as string literal in "MMM DD YYYY" format
    printf("Current Date: %s\n", __DATE__);

    //* current time as string literal in "HH MM SS" format
    printf("Current Time: %s\n", __TIME__);

    //* current timeStamp as string literal in "DDD MMM DD HH MM SS YYYY" format
    printf("Current TimeStamp: %s\n", __TIMESTAMP__);

    //* current FileName as string
    printf("Current FileName: %s\n", __FILE__);

    //* current lineNumber as decimal Constant
    printf("Current LineNumber: %d\n", __LINE__);

    getch();
    return 0;
}
