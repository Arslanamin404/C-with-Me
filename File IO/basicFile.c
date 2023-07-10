#include <stdio.h>

int main()
{
    FILE *filePtr = NULL;
    char str[120];
    char str2[] = {"\nThis content was added to this file using a C program by doing some input output operations.\n"};

    //************** Opening a file in reading Mode *****************
/*
     filePtr = fopen("basicFile.txt", "r");
     fscanf(filePtr, "%s", str);
     //*! fscanf function is similar to scanf(), it ends when a space is encountered
     printf("%s", str);
*/
    filePtr = fopen("basicFile.txt", "a");
    fprintf(filePtr,"%s",str2);

    return 0;
}
