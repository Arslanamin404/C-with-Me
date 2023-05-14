// WAP to print reverseNum of a given number and store it.
#include <stdio.h>
int main()
{
//Algorithm on NoteBook
    int num, reverseNum = 0, original;
    printf("Enter number: ");
    scanf("%d", &num);

    original = num; // bex value of num is changing(optional)
    while (num != 0)
    {
        reverseNum = reverseNum * 10;
        reverseNum = reverseNum + (num % 10); // NUM % 10 = lastDigit.
        num = num / 10;
    }
    printf("The reverseNum of %d is %d.", original, reverseNum);

    return 0;
}