#include <stdio.h>
int main()
{
    FILE *fptr = NULL;
    fptr = fopen("basicFile.txt", "r");
    if (fptr == NULL)
    {
        printf("Failed to open a file");
        return 1;
    }
    printf("File opened successfully.\n\n");
    
    // we will use fgetc(filePtr) function to read data from file.
    // This function reads only one character from file.
    // To read a complete file character by charater we will use loop with it.
    
    char ch = fgetc(fptr);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(fptr);
    }

    return 0;
}
