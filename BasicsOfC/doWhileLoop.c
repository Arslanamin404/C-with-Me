#include <stdio.h>
int main()
{
    int i = 1;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= 20);


// Quiz: Print first n natural numbs using do-while loop.
    int n = 1;
    int input;

    printf("Enter number: ");
    scanf("%d", &input);

    do
    {
        printf("%d \n", n);
        n++;
    } while (n <= input);

    return 0;
}
