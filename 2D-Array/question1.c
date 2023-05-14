/*WAP that takes number of students as input form user and stores marks of PCM respectively
 */
#include <stdio.h>
#include <conio.h>
int main()
{
    int students;

    printf("Enter number of students: ");
    scanf("%d", &students);

    printf("\n--------------------------------------------------------------------------------------------------\n\n");

    int pcmMarks[students][3];

    printf("Input the number of marks obtained by student in Physics Chemistry Maths respectively.");
    printf("\n\n---------------------------------------------------------------------------------------------------\n");

    for (int i = 0; i < students; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter marks of student %d: ", i + 1);
            scanf("%d", &pcmMarks[i][j]);
        }
        printf("\n");
    }

    printf("-------------------------------------------------------------------------------\n");

    for (int i = 0; i < students; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%5d", pcmMarks[i][j]);
        }
        printf("\n");
    }

    printf("-------------------------------------------------------------------------------\n");

    getch();
    return 0;
}