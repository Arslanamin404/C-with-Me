#include <stdio.h>
#include <stdlib.h> //used to generate random num.
#include <time.h>

int main()
{
    int number;

    srand(time(NULL)); // INITIALIZING THE RANDOM NUMBER GENERATOR
    printf("Ten Random numbers from (1 - 100): \n");

    // this will generate 10 random numbers.
    for (int i = 1; i <= 10; i++)
    {
        number = rand() % 100; // this will generate random num between 1-100.

        printf("%d\n", number);
    }
    return 0;
}
