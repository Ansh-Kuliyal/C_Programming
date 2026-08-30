#include <stdio.h>
#include <math.h>
int main()
{
    double radius = 0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    double volume = 0.0;
    const double pi = 3.14159;

    printf("Enter the radius: ");
    scanf("%lf",&radius);

    area = pi * pow(radius,2);
    surfaceArea = 4 * pi * pow(radius,2);
    volume = (4.0/3.0) * pi * pow(radius,3);

    printf("Area: %.2lf\n",area);
    printf("Surface Area: %.2lf\n",surfaceArea);
    printf("Volume: %.2lf",volume);

    return 0;
}