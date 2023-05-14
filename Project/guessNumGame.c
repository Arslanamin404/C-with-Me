#include <stdio.h>
#include <stdlib.h> //this library is used to generate random number.
#include <time.h>

int main()
{
    printf("This is a number guessing game.\n");
    
    char name[50];
    printf("Enter your name: ");
    gets(name);

    printf("Welcome %s, Guess the num between 1-100.\n", name);
    
    int gameNum, userNum, guess = 1;
    
    srand(time(0));         // this will generate a new number every time we run our program.
    gameNum = rand() % 100; // THIS WILL GENERATE RANDOM NUMBERS FROM 1-100.

    // printf("%d\n", gameNum);

    // keep running the program until number is guessed by the user.
    do
    {
        printf("Enter your Guess: ");
        scanf("%d", &userNum);

        if (userNum > gameNum)
        {
            printf("OPPS SORRY!!! Try a smaller number.\n");
        }
        else if (userNum < gameNum)
        {
            printf("OPPS SORRY!!! Try greater number.\n");
        }
        else if (userNum == gameNum)
        {
            printf("\n\nCongratulations %s!!! You guessed it right in %d guesses.",name, guess);
        }
        else
        {
            printf("Invalid Input!");
        }
        guess++;
    } while (userNum != gameNum);
    return 0;
}