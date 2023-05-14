#include <stdio.h>
    //Write a program to print n natural numbers in reverse order.
int main(){
    int input;
    printf("Enter num: ");
    scanf("%d",&input);

    for (int i=input; i; i--)
    {
        printf("%d\n", i);
    }
    return 0;
}
