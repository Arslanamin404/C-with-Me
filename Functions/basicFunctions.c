#include <stdio.h>
void greet()    //user defined function
{
    printf("Good Morning\nHow are you?\n");
    return;
}
void kashmir()
{
    printf("You are in Kashmir\n");
    return;
}
void dubai()
{
    printf("You are in Dubai\n");
    kashmir();
    return;
}
void england()
{
    printf("You are in England\n");
    dubai();
    return;
}
void iran()
{
    printf("You are in Iran\n");
    england();
    return;
}
void france()
{
    printf("You are in France\n");
    iran();
    return;
}
int main()
{
    greet(); // Function call
    france();
    return 0;
}