#include <stdio.h>

int main()
{
    int n;
    printf("Enter an integer : ");
    scanf("%d", &n);
    
    int ten = 1;
    int tmp = 0;
    int save = 0;

    while(n != 0)
    {
        tmp = n%8;
        tmp *= ten;
        ten *= 10;
        save += tmp;
        n /= 8;
    }
    printf("Octal number : 0%d\n",save);
    return 0;
}