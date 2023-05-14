// BMI calculator
#include <stdio.h>
#include <conio.h>
int main()
{
    float weight, height, BMI;
    printf("Enter you weight in kg's: ");
    scanf("%f", &weight);

    printf("Enter you height in cm's: ");
    scanf("%f", &height);

    if (weight == 0 || height == 0)
    {
        printf("Invalid Input");
    }

    BMI = (weight / (height * height)) * 10000;
    printf("BMI = %0.2f \n", BMI);
    if (BMI < 18.5)
    {
        printf("Status = UNDERWEIGHT");
    }
    else if(18.5 <= BMI && BMI < 25){
        printf("Status = NORMAL");
    }
    else if(25<= BMI && BMI < 30){
        printf("Status = OVERWEIGHT");
    }
    else{
        printf("Status = OBESITY");
    }
    getch();
    return 0;
}