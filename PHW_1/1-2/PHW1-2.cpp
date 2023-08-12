//solution 1
#include <stdio.h>

int main()
{
    int ten, a, box;

    printf("Enter five-digit number : ");
    scanf("%d",&a);

    for(int i=4; i>=0;i--)
    {
        ten = 1;

        for(int count=0; count<(i); count++)
        {
            ten = ten * 10;
        }

        box = a/ten;
        printf("%d ", box);
        a = a - ten*box;
    }

    printf("\n");

    return 0;
}

/* solution 2

#include <stdio.h>

int main()
{
    int n, ten; 

    printf("Enter five-digit number : ");
    scanf("%d", &n);


    for(int i=4; i>=0; i--)
    {     

        ten = 1;
        for(int count = 0; count<i; count++ )
        {
            ten = ten*10;
        }

        for(int j=0; j<10; j++)
        {
            if((j*ten<=n) && (n<(j+1)*ten))
            {
                printf("%d ", j);
                n = n - j*ten;
            }
        }

    }

    printf("\n");

    return 0;
}

*/

/* solution 3

#include <stdio.h>

int main()
{

    char a[5] = {0,};
    int count = 5;

    printf("Enter five-digit number : ");
    scanf("%s",a);

    for(int i = 4; i>=0; i--)
    {
        if(a[i]!=0)
            break;
        else
        {
            printf("0 ");
            count--;
        }
    }

    for(int j = 0; j<=count; j++)
        printf("%c ",a[j]);

    printf("\n");
    
    return 0;
}

*/

