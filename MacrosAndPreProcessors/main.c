#include <stdio.h>
#include <conio.h>
#include "functionFile.c"

int main(int argc, char const *argv[])
{
    printf("All the user defined functions used in this file are defined in another file.\nWe only call those functions in this file by including the file name #include \"fileName.c\".\n\n");
    int a, b;
    printf("Input two numbers: ");
    scanf("%d %d", &a, &b);
    
    printf("\n--------------------------------------------------------\n\n");
    
    sum(&a,&b);
    difference(&a,&b);
    product(&a,&b);
    quotient(&a,&b);
    remainderFunc(&a,&b);

    printf("\n--------------------------------------------------------\n\n");

    
    getch();
    return 0;
}
