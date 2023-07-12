#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TEXT_COLOR_RED "\x1b[31m"
#define TEXT_COLOR_GREEN "\x1b[32m"
#define TEXT_COLOR_DEFAULT "\x1b[0m"

int main()
{
    FILE *binaryPtr = NULL;
    binaryPtr = fopen("binaryFile.bin", "wb"); // wb-->Open the binary file in write mode

    if (binaryPtr == NULL)
    {
        printf(TEXT_COLOR_RED "Unable to open the binary file." TEXT_COLOR_DEFAULT); // Print an error message if binary file opening fails
        return 1;
    }

    char *str[] = {"Title: The Art of Programming Author: John Smith Year: 2022 ISBN: 978-1234567890 Introduction: In this book, we explore the principles and techniques of programming. Whether you are a beginner or an experienced developer, this book will provide valuable insights into the art of programming."};
    size_t elementsWritten = fwrite(str, sizeof(char), strlen(*str), binaryPtr);
    if (elementsWritten < strlen(*str))
    {
        printf("Error: Failed to write the entire string to the binary file.\n");
        return 2;
    }

    printf(TEXT_COLOR_GREEN "Data has been successfully read from TEXT FILE and written into BINARY FILE.\n\n" TEXT_COLOR_DEFAULT);

    fclose(binaryPtr); // Close the binary file

    return 0;
}
