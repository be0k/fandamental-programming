#include <stdio.h>

void set_scan(int *arr);
void insertion_sort(int *arr);

int main()
{
    int set1[10], set2[10], t,i,j, tmp;
    printf("\n\nSeparate between number and number with space key or enter key.\n");
    printf("size of set is ten(10), Press Enter key if you enter 10 numbers.\n");
    printf("If you enter more than 10 numbers in first set, numbers go to second set.\n");

    //scanf
    printf("Enter first set : ");
    set_scan(set1);
    printf("Enter second set : ");
    set_scan(set2);
    printf("\nUnion set : ");
    
    //set1,2  insertion sort
    insertion_sort(set1);
    insertion_sort(set2);

    //printf intersection set
    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            if(set1[i]==set2[j])
                break;
        }
        if(i==0 && j!=10)
            printf("%d ", set1[i]);
        else if(set1[i]!=set1[i-1] && j!=10)
            printf("%d ",set1[i]);
    }

    printf("\n");
    return 0;
}

void set_scan(int *arr)
{
    for(int i=0; i<10; i++)
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