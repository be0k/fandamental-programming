#include <stdio.h>

int main()
{
    int s1, s2, s3;
    float as;
    printf("Enter your scores of 3 subjects : ");
    scanf("%d %d %d", &s1, &s2, &s3);

    if(s1>100 || s1<0 || s2>100 || s2<0 || s3>100 || s3<0)
    {
        printf("The scores that you enter is more than 100 or less than 0.\n");
        printf("Please Run code again");
        return 0;
    }
    as = (float)(s1 + s2 + s3)/3;

    printf("Your average score is %f.\n",as);

    if (as>=90)
    {
        printf("Your grade is A.\n");
        printf("Your scholarship is 700,000₩.\n");
    }
    else if (as>=80)
    {
        printf("Your grade is B.\n");
        printf("Your scholarship is 300,000₩.\n");
    }
    else if (as>=70)
    {
        printf("Your grade is C.\n");
        printf("Your scholarship is 100,000₩.\n");
    }
    else if (as>=60)
    {
        printf("Your grade is D.\n");
        printf("Your scholarship is 0₩.\n");
    }
    else
    {
        printf("Your grade is F.\n");
        printf("Your scholarship is 0₩.\n");
    }

    return 0;
}