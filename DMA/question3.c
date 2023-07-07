/*
 * WAP to dynamically allocate memory for a struct and assign values to its members.
 */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct classRoom
{
    char name[30];
    int marks;
};

int main()
{
    int size;
    printf("Number of students: ");
    scanf("%d", &size);
    fflush(stdin);

    // Allocate memory to the array of strcut
    struct classRoom *student = (struct classRoom *)malloc(size * sizeof(struct classRoom));

    if (student == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1; // Exit the program with an error status
    }
    else
    {
        printf("Memory Allocated successfully.\n\n");
    }

    for (int i = 0; i < size; i++)
    {
        printf("Name of Student: ");
        fgets(student[i].name, sizeof(student->name), stdin);
        student[i].name[strcspn(student[i].name, "\n")] = '\0';      //! Replace newline character (fgets) with null character

        printf("Marks obtained: ");
        scanf("%d", &student[i].marks);
        fflush(stdin);

        printf("\n");
    }

    printf("S.No   NAME \t\t\t\tMARKS\n");
    for (int i = 0; i < size; i++)
    {
        printf("%2d.    %-32s %d\n", i + 1, student[i].name, student[i].marks);
    }
    
    free(student);
    return 0;
}
