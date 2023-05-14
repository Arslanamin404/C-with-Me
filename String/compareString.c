// Create a program to compare two strings and print the larger string.
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50];
    char str2[50];

//Get strings input from user using fgets() 

    printf("Enter string 01: ");
    fgets(str1,sizeof(str1),stdin);
    
    printf("Enter string 02: ");
    fgets(str2,sizeof(str2),stdin);

//get length of both the strings using strlen()
    int len1,len2;
    len1 = strlen(str1);
    len2 = strlen(str2);


//Print the larger string 
    if(len1 > len2)
    {
        printf("Largest string is : %s",str1);
    }
    else
    {
        printf("Largest string is : %s",str2);
    }

    return 0;
}