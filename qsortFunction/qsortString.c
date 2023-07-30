#include <stdio.h>
#include <stdlib.h>
// #include <conio.h>
#include <string.h>

void readNames(char names[][21], int size);
int compareStr(const void *p1, const void *p2);
void printNames(char names[][21], int size);

int main()
{
    int size;
    printf("Number of names to be sorted: ");
    scanf("%d", &size);
    fflush(stdin);

    char names[size][21];

    readNames(names, size);

    qsort(names, size, sizeof(names) / sizeof(names[0]), compareStr);
    printf("\n------------------------------------------------------------\n");

    printNames(names, size);

    // getch();
    return 0;
}

void readNames(char names[][21], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Name %d: ", i + 1);
        fgets(names[i], 20, stdin);
    }
}

int compareStr(const void *p1, const void *p2)
{
    /*
    Based om ASCII values STRCMP() returns:
    if str1 = str2, strcmp returns 0;
    if str1 < str2, strcmp returns negative;
    if str1 > str2, strcmp returns positive;
    */
    return strcmp(*(char **)p1, *(char **)p2);
}

void printNames(char names[][21], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%s", names[i]);
    }
}
