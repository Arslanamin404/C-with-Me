/* Sort the names alphabetically
 strcmp() compares strings character by character.
 say for example we have to set the given chars in alphabetical manner.
 e,a,z;
 as ASCII value of e > ASCII value of a;
 therefor e is bigger than a and will swap there places and so onn.....

this will be done using strcmp()
if str1 = str2, strcmp returns 0;
if str1 < str2, strcmp returns negative;
if str1 > str2, strcmp returns positive;

we will use selection sort method
*/
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    int size;
    printf("Number of names: ");
    scanf("%d", &size);
    fflush(stdin);

    char names[size][21];
    // char names[size][20]; [size]=> number of names to be printed or sorted , [20]=> length of each string/name.

    char temp[21]; // for swapping/sorting

    printf("\nEnter the names to sort them in alphabetic order \n");
    for (int i = 0; i < size; i++)
    {
        printf("Name %d: ", i + 1);
        gets(names[i]);
    }

    // loops for sorting
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            /*
            if str1 = str2, strcmp returns 0;
            if str1 < str2, strcmp returns negative;
            if str1 > str2, strcmp returns positive;
            */
            if (strcmp(names[i], names[j]) > 0)
            {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("\nNames sorted in alphabetical order: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%s\n", names[i]);
    }

    getch();
    return 0;
}  