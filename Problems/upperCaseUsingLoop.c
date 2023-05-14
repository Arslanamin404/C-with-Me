#include <stdio.h>
int main()
{
    char alphabet;
    int ascii;
    printf("Enter any upperCase letter: ");
    scanf("%c", &alphabet);

    ascii = alphabet; 
    
    printf("\n---------------------------------------------------------------------\n\n");
    printf("Alphabets in uppercase from '%c' with ASCII values are: \n", alphabet,ascii);
    printf("---------------------------------------------------------------------\n\n");
    
    while (alphabet <= 'Z')
    {
        printf("%d %c\n", ascii,alphabet);
        alphabet++;
    }
//WAP TO CHECK THE ENTERED CHARACTER IS CAPITAL,SMALL CASE LETTER, DIGIT OR SPECIAL SIMBOL IN C?
    return 0;
}