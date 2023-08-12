#include <stdio.h>

void set_scan(int *arr);
void insertion_sort(int *arr);

int x,y,z;

int main()
{
    int set1[10], set2[10], t,i,j, tmp;
    printf("\n\nSeparate between number and number with space key or enter key.\n");
    printf("size of set is ten(10), Press Enter key if you enter 10 numbers.\n");
    printf("If you enter more than 10 numbers in first set, numbers go to second set.\n");
    printf("%p %p %p %p %p %p\n",set1,set2,&t,&i,&j,&tmp);
    printf("%p %p %p\n",&x,&y,&z);
    //scanf
    printf("Enter first set : ");
    set_scan(set1);
    printf("%d\n",set1[10]);
    printf("Enter second set : ");
    set_scan(set2);
    printf("\nUnion set : ");
    
    //set1,2  insertion sort
    insertion_sort(set1);
    insertion_sort(set2);

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

void set_scan(int *arr)
{
    int a,b,c,d;
    printf("%p %p %p %p\n",&a,&b,&c,&d);
    for(int i=0; i<11; i++)
        scanf("%d", &arr[i]);
}

void insertion_sort(int *arr)
{
    for(int i=1; i<10; i++)
    {
        int j=i-1;
        int tmp = arr[i];
        while(j>=0 && (tmp<arr[j]))
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=tmp;
    }
}