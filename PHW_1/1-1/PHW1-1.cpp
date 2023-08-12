#include <stdio.h>

int main()
{
    float u, a, t, v, s;

    printf("Enter initial velocity : ");
    scanf("%f", &u);

    printf("Enter acceleration of an object : ");
    scanf("%f", &a);

    printf("Enter time that has elapsed : ");
    scanf("%f", &t);

    v = u + a * t;
    s = u * t + 0.5 * a * t * t;
    
    printf("final velocity = %f\ndistance traversed = %f\n",v,s);

    return 0;
}