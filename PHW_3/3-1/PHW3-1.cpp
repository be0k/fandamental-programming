#include <stdio.h>
int main()
{
    int set1[10], set2[10], t,i,j, tmp;
    printf("\n\nSeparate between number and number with space key or enter key.\n");
    printf("size of set is ten(10), Press Enter key if you enter 10 numbers.\n");
    printf("If you enter more than 10 numbers in first set, numbers go to second set.\n");

    //scanf
    for(t=0; t<2; t++)
    {
        printf(!t?"Enter first set : ":"Enter second set : ");
        for(i=0; i<10; i++) scanf("%d", !t?&set1[i]:&set2[i]);
    }
    printf("Union set : ");
    
    //set1,2  insertion sort
    for(i=1; i<10; i++)
    {
        j=i-1;
        tmp = set1[i];
        while(j>=0 && (tmp<set1[j]))
        {
            set1[j+1]=set1[j];
            j--;
        }
        set1[j+1]=tmp;
        
        j=i-1;
        tmp = set2[i];
        while(j>=0 && (tmp<set2[j]))
        {
            set2[j+1]=set2[j];
            j--;
        }
        set2[j+1]=tmp;
    }

    //printf set1
    printf("%d ",set1[0]);
    for(i=1; i<10; i++)
    {
        if(set1[i]!=set1[i-1])
            printf("%d ",set1[i]);
    }

    //printf set2
    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            if(set2[i]==set1[j])
                break;
        }
        if(i==0 && j==10)
            printf("%d ", set2[i]);
        else if(set2[i]!=set2[i-1] && j==10)
            printf("%d ",set2[i]);
    }

    
    printf("\n");
    return 0;
}


