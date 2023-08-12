#include <stdio.h>

int main()
{
    int num, cnt = 0;
    printf("Enter an integer : ");
    scanf("%d", &num);
    
    if(num>=0)
    {
        while(num>=1)
        {
            if(num%10==9)
                cnt++;
            num = num/10;
        }
    }
    else
    {
        while(num<=-1)
        {
            if(num%10==-9)
                cnt++;
            num = num/10;
        }
    }

    printf("The number of 9 is %d\n", cnt);
    return 0;
}