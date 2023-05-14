// C Program to Count the Number of Vowels ,Consonants and Spaces.
#include <stdio.h>
#include <ctype.h>
int main()
{
    int vowel, consonant, size, space;
    vowel = consonant = size = space = 0;
    char str[50];
    printf("enter string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        // ctype.h ---> tolower(), toupper()--->it is used to convert a character into upper or lowercase

        str[i] = tolower(str[i]);

        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vowel++;
        }
        else if (str[i] == ' ')
        {
            space++;
        }
        else
        {
            consonant++;
        }
        size++;
    }

    printf("----------------------------------------------------\n");

    printf("Total Characters: %d\n", size);
    printf("Total Vowels: %d\n", vowel);
    printf("Total Consonant: %d\n", consonant);
    printf("Total Space: %d\n", space);

    printf("----------------------------------------------------\n");

    return 0;
}
