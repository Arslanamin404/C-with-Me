#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void generatePassword(int passwordLength);
int main()
{
    int exit;
    do
    {
        system("cls");
        int passwordLength;

        printf("Welcome to this program. In this program you will be able to generate your random passwords that are very difficult to crack.\nYou will be asked to input the length of password only.\n\n");

        printf("Enter the desired password length: ");
        scanf("%d", &passwordLength);

        printf("\nYour password is: ");
        generatePassword(passwordLength);

        printf("\n\n-------------------------------------------------------------------------------------\n\n");
        printf("Do want to regenerate your password? Press any key to continue and 0 to exit the program.\n");
        printf("Enter your choice: ");
        scanf("%d", &exit);

    } while (exit != 0);
    getch();
    return 0;
}

void generatePassword(int passwordLength)
{
    char passwordCharacters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$&*()";
    char passwordCharactersLength = sizeof(passwordCharacters) - 1; // passwordCharacters -1, because of null charater in string

    srand(time(NULL)); // initializing the random number generator

    for (int i = 0; i < passwordLength; i++)
    {
        int passwordIndex = rand() % passwordCharactersLength; // generate a random index with in a range of passwordCharacters

        // this will generate random character from character set
        printf("%c", passwordCharacters[passwordIndex]);
    }
}
