/* WAP to receive values of latitude and longitude in degrees of two places on EARTH and outputs the distance between them in nautical miles. The formula for distance in nautical miles is :
D = 3963*COSinverse (SIN L1 * SIN L2 + COS L1 * COS L2 * COS(G2-G1))
L1 L2 IS LATITUDE
G1 G2 IS LONGITUDE
*/
#include <stdio.h>
#include <math.h>
#define PI 3.14
int main()
{
    float L1, L2, G1, G2, D, Dkm;

    printf("\n--------------------------------------------------------------------------------------------------\n");

    printf("Welcome to this program, this is a distance calculator which takes the values of latitude and longitude\nin degrees of two places on EARTH from user and outputs the distance between them in nautical miles.\nPlease input the values of latitude and longitude in degrees.\n NOTE: Latitude(horizontal) ranges from  -90 to 90 degrees 0 degree at equator and Longitude(vertical) ranges from -180 to 180 degrees.");

    printf("\n--------------------------------------------------------------------------------------------------\n");

    printf("Enter Latitude1 and Longitude1 (L1,G1): ");
    scanf("%f %f", &L1, &G1);

    printf("----------------------------------------------------------------------------------------------------\n");

    printf("Enter Latitude2 and Longitude2 (L2,G2): ");
    scanf("%f %f", &L2, &G2);

    printf("----------------------------------------------------------------------------------------------------\n");

    // Convert degrees into radian
    L1 = L1 * PI / 180;
    L2 = L2 * PI / 180;
    G1 = G1 * PI / 180;
    G2 = G2 * PI / 180;

    D = 3963 * acos(sin(L1) * sin(L2) + cos(L1) * cos(L2) * cos(G2 - G1));

    // Convert NauticalMiles to KiloMeters;
    Dkm = D * 1.852;

    printf("Distance = %.2f nmi.\n", D);

    printf("----------------------------------------------------------------------------------------------------\n");

    printf("Distance = %.2f KM.\n", Dkm);

    printf("--------------------------------------------------------------------------------------------------\n\n");

    return 0;
}