#include<stdio.h>
int main(){
    // String Literal
    char arr[] = "Hello guys, I am learning C Programming.";
    printf("%s",arr);
    
    printf("\n-----------------------------------------------------------\n");

    int i = 0;
    while (arr[i] != '\0')
    {
        printf("%c ",arr[i]);
        i++;
    }
    
    return 0;
}