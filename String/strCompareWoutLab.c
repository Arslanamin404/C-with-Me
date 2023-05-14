#include <stdio.h>
int main()
{
    // Compare length of two strings without library function.
    char str1[] = "Hello user, welcome";
    char str2[] = "to this program";

    int i = 0, j = 0;
    int size1 = 0, size2 = 0;
    while (str1[i] != '\0')
    {
        // size1++;
        i++;
    }

    while (str2[j] != '\0')
    {
        // size2++;
        j++;
    }
    
    //it will also count null character that is why we used i-1, j-1  
    printf("\nThe length of strings is \'%d\' and \'%d\'. \n\n", i-1, j-1);

    printf("----------------------------------------------------------\n\n");

    char str3[100];
    char str4[100];

    printf("Enter String 1: ");
    fgets(str3, 50, stdin);

    printf("Enter String 2: ");
    fgets(str4, 50, stdin);

    int k = 0, l = 0;

    while (str3[k] != '\0')
    {
        k++;
    }

    while (str4[l] != '\0')
    {
        l++;
    }

    //it will also count null character that is why we used k-1, l-1
    printf("\nThe length of your strings is \'%d\' and \'%d\'. \n\n", k-1, l-1);

    return 0;
}