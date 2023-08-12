#include <stdio.h>

int main()
{
    double e, num;
    int cnt; 
    //e = 2.7182818
    //printf("%lf",e) --> 2.718282

    cnt = 0;
    e = 0;

    while(e<=2.7182815)
    {
        num = 1;
        for(int y=cnt; y>=1; y--)
        {
            num = num*y;
        }
        e = e + 1/num;
        cnt ++;
    }
    printf("%lf\n\n",e);
    printf("To print %lf, this program is repeated %d times.\n(From 1/0! to 1/%d!)\n",e,cnt,cnt-1);
    return 0;
}