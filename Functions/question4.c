// Write a function to print "Hot" or "Cold" depending on the temperature user enters.
#include <stdio.h>
void message(float t)
{
    // function with parameter and no return
    if (t < 5)
    {
        printf("Temperature outside is Cold, dont forget to wear warm cloths before leaving your home.\n");
    }
    else
    {
        printf("Temperature outside is Hot, Stay hydrated");
    }
}

int main()
{
    float temp;

    printf("Enter Temperature in celsius : ");
    scanf("%f", &temp);

    message(temp);

    return 0;
}