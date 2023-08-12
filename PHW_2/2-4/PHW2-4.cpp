#include <stdio.h>

int main()
{
    int max, n, i, j, k;
    max = 9;

    for(n=0; n<=1; n++)
    {
        for(n ? i=max-2 : i=1;
            n ? i>=1 : i<=max;
            n ? i-=2 : i+=2)
        {
            for(j=max; j>i; j-=2)
            {
                printf(" ");
            }
            for(k=1; k<=i; k++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}