/*WAP to check whether a triangle is valid or not , take the three values of angles as input from user. A triangle is valid if the sum of angles is 180;
 */
#include <stdio.h>
int main()
{
    float angle1, angle2, angle3, total;

    printf("\n\n-----------------------------------------------------------------------------\n");

    printf("Input the value of angles in degrees\n");
    
    printf("-----------------------------------------------------------------------------\n");

    printf("Enter the value of three angles(A1, A2, A3): ");
    scanf("%f %f %f", &angle1, &angle2, &angle3);
    
    printf("-----------------------------------------------------------------------------\n");

    total = angle1 + angle2 + angle3;

    if (total > 180 || total < 180)
    {
        printf("Triangle is invalid.");
    }
    else
    {
        printf("Triangle is valid.");
    }
    printf("\n-------------------------------------------------------------------------------\n");

    return 0;
}