#include <stdio.h>

int main()
{
    int i, num;

    printf("Enter an integer : ");
    scanf("%d", &num);

    if(num<2 || (num%2==0 && num!=2))
    {
        printf("%d is not a prime number\n", num);
        return 0;
    }

    for(i=3; i<num; i+=2)
    {
        if(num%i==0)
        {
            printf("%d is not a prime number\n", num);
            return 0;
        }
    }

    if(i==num || num==2)
    {
        printf("%d is a prime number\n", num);
        return 0;
    }
    return 0;
}