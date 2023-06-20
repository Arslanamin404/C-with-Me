#include <stdio.h>
#include <string.h>

// TYPEDEF is used to give alternative names to existing datatypes.
// SYNTAX=> typedef originalName alternativeName;

// typedef can be used to change the name of datatype, here now we can access employee structure without using struct keyword. We can access it using emp only.
typedef struct employee
{
    int id;
    char name[30];
    char email[25];
}emp;

int main()
{
    // printf(__DATE__);
    // printf(__TIME__);
    printf(__TIMESTAMP__);
    emp e1,e2;
    e1.id = 69;
    strcpy(e1.name,"Arsh");
    strcpy(e1.email,"Arsh@mail.com");

    e2.id = 269;
    strcpy(e2.name,"jod");
    strcpy(e2.email,"jod@hotmail.com");


    printf("\n\nDetails of employee 1: \nId: %d\nName: %s\nEmail: %s\n\n",e1.id,e1.name,e1.email);

    printf("Details of employee 2: \nId: %d\nName: %s\nEmail: %s\n\n",e2.id,e2.name,e2.email);

    return 0;
}
