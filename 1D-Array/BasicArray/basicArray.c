// Input and output in array
#include <stdio.h>
int main()
{
    int marks[10];
    printf("Enter the marks of students Roll Number wise!\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the marks of Roll Number %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    
    printf("\n\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Marks obtained by Roll Number %d = %d \n", i + 1, marks[i]);
    }
    return 0;
}