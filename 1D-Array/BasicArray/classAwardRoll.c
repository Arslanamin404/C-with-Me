// Lets make an award roll
#include <stdio.h>
#include <conio.h>
int main()
{
    int rollOfClass, class, maxMarks;
    printf("Warning:\nOnly input numeric values.\nIncase of invalid input marks of that student will be set to 0.\n\n");
    printf("Enter the ClassName (only int): ");
    scanf("%d", &class);

    printf("Enter the max marks: ");
    scanf("%d", &maxMarks);

    printf("Enter the number of students in class: ");
    scanf("%d", &rollOfClass);

    float marks[rollOfClass], avg, sum;

    for (int i = 0; i < rollOfClass; i++)
    {
        printf("Enter marks of Roll Number %d: ", i + 1);
        scanf("%f", &marks[i]);
        if (marks[i] > maxMarks)
        {
            marks[i] = 0;
            printf("Invalid Marks!\n");
        }
    }

    for (int i = 0; i < rollOfClass; i++)
    {
        sum = sum + marks[i];
        avg = sum / rollOfClass;
    }

    // This loop is for designing the output
    printf("\nAward Roll of class %dth\n\n", class);

    for (int i = 0; i < rollOfClass; i++)
    {
        printf("RollNumber[%2d] = %0.2f\n", i + 1, marks[i]);
    }
    printf("\nAverage of class %dth is %0.2f", class, avg);
    getch();
    return 0;
}