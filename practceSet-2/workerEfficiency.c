/*In a company, worker efficiency is determined on the basis of time required for a worker to complete a particular job. If time taken by worker is between 2-3hours, then the worker is said to be highly efficient. If time taken by worker is between 3-4hours, then the worker is ordered to improve speed. If time taken by worker is between 4-5hours then the worker is given training to improve his speed and time taken by worker is more than 5 hours then the worker is terminated. If the time taken by the worker is input through keyboard WAP to find efficiency of worker.
 */
#include <stdio.h>
int main()
{

    printf("\n\n---------------------------------------------------------------------------------------------------\n");

    char name[50];
    printf("Worker Name: ");
    scanf("%s", name);

    printf("---------------------------------------------------------------------------------------------------\n");

    printf("Welcome %s to this program,\nthis program will determine the efficiency of a worker based on the time taken by a worker to complete a particular job.", name);

    printf("\n---------------------------------------------------------------------------------------------------\n");

    float hour;

    printf("Hours taken to complete a job: ");
    scanf("%f", &hour);

    printf("-----------------------------------------------------------------------------------------------\n");

    if (hour >= 2 && hour < 3)
    {
        printf("%s, you are Highly Efficient. Keep it up.", name);
    }
    else if (hour >= 3 && hour < 4)
    {
        printf("%s, You have to Improve your Speed", name);
    }
    else if (hour >= 4 && hour < 5)
    {
        printf("%s, Join the Training from next working day.", name);
    }
    else if (hour >= 5)
    {
        printf("%s, you are Terminated.", name);
    }
    else
    {
        printf("Invalid Input.");
    }

    printf("\n-----------------------------------------------------------------------------------------------\n\n");
    return 0;
}