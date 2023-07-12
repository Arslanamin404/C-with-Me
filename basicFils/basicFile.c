#include <stdio.h>

int main()
{
    FILE *filePtr = NULL;
    char str[200];
    char str2[] = {"\nThis content was added to this file using a C program by doing some input output operations.\n"};

    filePtr = fopen("basicFile.txt", "r");
    if (filePtr == NULL)
    {
        printf("Failed to open a file basicFile.txt.\n");
        return 1;
    }

    // fscanf function is similar to scanf(), it also ends when a space is encountered
    //*(filePtr, "%s", str);

    // Another function is fgets it also reads data from a file, but it terminates when a new line is encountered
    // we will use loop so that it will read all the data from file.

    while (fgets(str, 200, filePtr) != NULL)
    {
        // fgets(str,numberOfCharsInPerLine,filePtr);
        // fgets() will read up to (200-1) characters from the input stream for each iteration.
        printf("%s", str);
    };

    filePtr = fopen("basicFile.txt", "a");
    fprintf(filePtr, "%s", str2);

    fclose(filePtr);

    return 0;
}
