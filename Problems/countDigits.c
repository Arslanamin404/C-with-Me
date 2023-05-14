//WAP to print number of digits of a number.
#include <Stdio.h>
int main()
{
    // Algorithm and logic on NoteBook.
    int n, count = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        n = n/10;
        count ++;
    }
    printf("The number of digits are %d", count);
    return 0;
}