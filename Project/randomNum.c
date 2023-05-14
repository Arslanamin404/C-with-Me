#include <stdio.h>
#include <stdlib.h> //used to generate random num.
#include <time.h>

int main()
{
    int number;
    
    srand(time(0));        // this will generate different number every time we run the program.

    number = rand() % 100; // this will generate random num between 1-100.
    
    printf("Random number is: %d", number);

    // this will generate 10 random numbers.
    for (int i = 0; i < 10; i++)
    {
        number = rand(); // generate a random number
        printf("%d\n", number);
    }
    return 0;
}