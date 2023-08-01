#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[50];
    int marks;
} students;

students student[5];

int compare(const void *a, const void *b);

int main()
{
    system("clear");
    printf("Enter name & marks of 5 students.\n\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Name: ");
        scanf(" %[^\n]", student[i].name);
        printf("Marks: ");
        scanf("%d", &student[i].marks);
        getchar(); // Consume the newline character from the input buffer
        printf("----------------------------------\n");
    }

    system("clear");
    qsort(student, 3, sizeof(student[0]), compare);
    printf("List of students is descending order of marks: ");
    printf("\n------------------------------------------------\n\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Name: %s\n", student[i].name);
        printf("Marks: %d\n", student[i].marks);
        printf("--------------------------\n");
    }
    return 0;
}

int compare(const void *a, const void *b)
{
    const students *student1 = (students *)a;
    const students *student2 = (students *)b;
    return student1->marks + student1->marks;
}
