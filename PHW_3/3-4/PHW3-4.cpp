#include <stdio.h>
int main()
{
    char s[6][100];
    for(int i=0; i<6; i++)
    {
        printf("Enter %d-th conversation : ",i);
        fgets(&s[i][0],100,stdin);
    }
    printf("The strings ending with \"?\" are : \n");
    for(int i=0; i<6; i++)
    {
        int j=0;
        while(s[i][j] != 0)
            j++;
        if(s[i][j-2]=='?')
        {
            s[i][j-1]='\0';
            puts(&s[i][0]);
        }
    }
}