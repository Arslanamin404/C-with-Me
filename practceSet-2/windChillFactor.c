/*wind chill factor is the felt air temperature on exposed skin due to wind. The wind chill temperature is always lower than the air temperature, and is calculated as the following formula:
if user input is in fahrenheit and miles per hour use the formula given below:
wcf = 35.74 + 0.6215t + (0.4275t - 35.75)* v^0.16
if user input is in celsius and kilometer hour use the formula given below:
wcf = 35.74 + 0.6215t+ (0.4275t - 35.75) * (velocity / 3.6)^ 0.16
where t is the air temperature, v is the wind velocity, and wcf is the wind chill temperature.
WAP to receive values of temperature and wind velocity and calculate wind chill factor.
*/

#include <stdio.h>
#include <math.h>
int main()
{
    float temperature, velocity, wcf;
    int choice, exit;
    char name[50];

    printf("\n------------------------------------------------------------------------------------------\n");

    printf("Enter your name: ");
    scanf("%s", name);

    printf("------------------------------------------------------------------------------------------\n");
    do
    {
        printf("\nWelcome %s to this program, this is the WIND CHILL FACTOR CALCULATOR.\nSelect your choice: \n  1 to enter temperature in Celsius and wind velocity in KiloMeterPerHour. \n  2 to enter temperature in Fahrenheit and wind Velocity in MilesPerHour.\n  3 to Exit.", name);

        printf("\n------------------------------------------------------------------------------------------\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("------------------------------------------------------------------------------------------\n");
        switch (choice)
        {
        case 1:
            printf("Enter the temperature(C): ");
            scanf("%f", &temperature);

            printf("Enter the velocity(KMPH) of wind: ");
            scanf("%f", &velocity);

            wcf = 35.74 + 0.6215 * temperature + (0.4275 * temperature - 35.75) * pow(velocity / 3.6, 0.16);

            printf("---------------------------------------------------------------------------------------------\n");

            printf("The wind chill factor is %0.2f Celsius.", wcf);

            break;

        case 2:
            printf("Enter the temperature(F): ");
            scanf("%f", &temperature);

            printf("Enter the velocity(MPH) of wind: ");
            scanf("%f", &velocity);

            wcf = 35.74 + 0.6215 * temperature + (0.4275 * temperature - 35.75) * pow(velocity, 0.16);

            printf("---------------------------------------------------------------------------------------------\n");

            printf("The wind chill factor is %0.2f Fahrenheit.", wcf);

            break;

        case 3:
            printf("Thank you for using the program. Goodbye.");
            break;

        default:
            printf("Invalid choice. Try again.");
            break;
        }
        printf("\n------------------------------------------------------------------------------------------\n");

        printf("\nDo you want to check again?\n Enter 1 to run again and 0 to exit: ");
        scanf("%d", &exit);

    } while (exit != 0);

    printf("Thank you for using the program. Goodbye have a nice time ahead.");

    printf("\n------------------------------------------------------------------------------------------\n\n");

    return 0;
}