#include <stdio.h>

int main()
{
    char s[100];
    int i;
    printf("Enter a line of text : ");
    fgets(s,100,stdin);
    i=0;
    
    //change uppercase letters to lowercase letters.
    while(s[i]!=0)
    {
        if(s[i]>=65 && s[i]<=90)
            s[i]=s[i]+32;
            i++;
    }

    //code to prevent error s[-1]
    i = 0;
    while(!(s[i]>=97 && s[i]<=122))
        i++;
    if(i==0)
    {
        s[i] = s[i] -32;
        i=i+2;
    }

    //main code
    //first, determine whether s[i] is lowercase letter.
    //second, determine whether s[i-1] is lowercase letter.
    while(s[i]!=0)
    {
        if(s[i]>=97 && s[i]<=122)
        {
            if(s[i-1]>=97 && s[i-1]<=122)
            {
                s[i] = s[i] - 32;
                i=i+2;
            }
            else
            {
                i++;
            }
        }
        else
        {
            int sv = i;
            while(!(s[i]>=97 && s[i]<=122))
            {
                if(s[i] == '\0')
                {
                    puts(s);
                    return 0;
                }
                i++;
            }
            if(s[sv-1]>=97 && s[sv-1]<=122)
            {
                s[i] = s[i] - 32;
                i=i+2;
            }
            else
                i++;
        }     
    }

    puts(s);
    return 0;
}
/*2번 건너뛰었는데 영어임.
1. 전 문자가 영어임
2. 전 문자가 영어가 아님

2번 건너뛰었는데 영어가 아님
1. 전 문자가 영어임
2. 전 문자가 영어가 아님*/