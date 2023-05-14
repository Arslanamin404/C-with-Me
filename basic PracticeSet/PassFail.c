#include <stdio.h>
int main()
{
        // Q1. Write a program to find out whether a student is pass or fail, if it requires total 40% and atleast 33% in each subject to pass. Assume 3 subjects and take marks as an input from user.

        float english, math, science, totalMarks, percentAge, TotalPassMarks, passMarks;
        printf("Enter your marks out of 100 respectively.\n");
        printf("Pass Criteria: Score totalMarks more than 40%% and in each subject score more than 33%%  respectively.\n");

        printf("Marks scored in English: ");
        scanf("%f", &english);

        printf("Marks scored in Math: ");
        scanf("%f", &math);

        printf("Marks scored in Science: ");
        scanf("%f", &science);

        totalMarks = english + math + science;
        printf("Total marks = %0.2f \n", totalMarks);

        // printf("%%")=> this will print percentage symbol.
        percentAge = (totalMarks / 300) * 100;
        printf("PercentAge = %.2f%% \n", percentAge);

        TotalPassMarks = (300 / 100) * 40;

        passMarks = 33;

        if ((totalMarks < TotalPassMarks) || english < passMarks || math < passMarks || science < passMarks)
        {
            printf("You are Fail, work-Harder");
        }
        else
        {
            printf("Congratulations, You are pass!");
        }
    return 0;
}