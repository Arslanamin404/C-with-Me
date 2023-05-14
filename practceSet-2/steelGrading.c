/*
WAP that requires the user to give values of hardness, carbonCOntent and tensile strength of the steel and output the grade of steel
*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int hardness = 50, userHardness;
    float carbonContent = 0.7, userCarbonContent;
    int tensileStrength = 5600, userTensileStrength;

    printf("\n---------------------------------------------------------------------------------------\n");
    
    printf("Welcome user, this is a Steel Grading program");
    
    printf("\n---------------------------------------------------------------------------------------\n");
  
    printf("Enter the following asked details correct to check the GRADE of your steel...");

    printf("\n----------------------------------------------------------------------------------------\n");

    printf("Enter Hardness of your steel: ");
    scanf("%d", &userHardness);

    printf("Enter Carbon Content of your steel: ");
    scanf("%f", &userCarbonContent);

    printf("Enter Tensile Strength of your steel: ");
    scanf("%d", &userTensileStrength);

    printf("--------------------------------------------\n");
    
    if (userHardness > hardness && userCarbonContent > carbonContent && userTensileStrength > tensileStrength)
    {
        printf("Your steel grade = 10");
    }
    else if (userHardness > hardness && userCarbonContent > carbonContent)
    {
        printf("Your steel grade = 9");
    }
    else if (userCarbonContent > carbonContent && userTensileStrength > tensileStrength)
    {
        printf("Your steel grade = 8");
    }
    else if (userHardness > hardness && userTensileStrength > tensileStrength)
    {
        printf("Your steel grade = 7");
    }
    else if (userHardness > hardness || userCarbonContent > carbonContent || userTensileStrength > tensileStrength)
    {
        printf("Your steel grade = 6");
    }
    else
    {
        printf("Your steel grade = 5");
    }
    printf("\n--------------------------------------------\n\n");
    getch();
    return 0;
}