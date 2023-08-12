#include <stdio.h>

int main()
{

    double r, pie = 3.14;

    printf("Enter the radius of a circle : ");
    scanf("%lf", &r);


    printf("\nThe circle's area is %lf\n", pie * r * r);
    printf("The circumference is %lf\n", 2 * pie * r);

    return 0;
}