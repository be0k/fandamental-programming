#include <stdio.h>

int main()
{
    int n, fac, e, num;
    printf("Enter a nonnegative integer : ");
    scanf("%d", &n);
    if(n<0)
    {
        printf("an integer that you entered is negative integer.\n");
    }
    else if(n==0)
    {
        printf("1\n");
    }
    else
    {
        fac = 1;

        for(int i=n; i>=1; i--)
        {
            fac = fac * i;
        }
        printf("%d\n",fac);
    }

    return 0;
}