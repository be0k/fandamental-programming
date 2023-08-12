#include <stdio.h>

int main()
{
    float BMI, weight, height;
    int prefer;
    char change;

    printf("\n---BMI calculator---\n\n");
    printf("Enter 0 or 1\n[0 : Inches & Pounds / 1 : Meters & Kilograms]");
    scanf("%d",&prefer);

    if(prefer == 0)
    {
        printf("Enter your weight(Pounds) : ");
        scanf("%f", &weight);
        printf("Enter your height(Inches) : ");
        scanf("%f", &height);

        BMI = weight * 703 / (height * height);
    }
    else if (prefer == 1)
    {

        printf("Enter your weight(Kilograms) : ");
        scanf("%f", &weight);
        printf("Enter your height(Meters) : ");
        scanf("%f", &height);
        
        if(height>3)
        {
            printf("\nAre you %f(meters) height?\n",height);
            printf("Do you want to change the unit from Meters to Centimeters?[Y/N]");
            scanf(" %c", &change);
            if(change == 'n' || change == 'N')
            {
                BMI = weight / (height * height);
            }
            else
            {
                BMI = weight*10000 / (height * height);
            }
        }
    }
    else
    {
        printf("Please enter 0 or 1\n");
        return 0;
    }

    if(height<=0 || weight<=0)
    {
        printf("Height or weight can't be less than or equal to 0\n");
        return 0;
    }

    printf("\n\nYour BMI is %f\n", BMI);

    if(BMI<18.5)
        printf("Your BMI VALUES is Underweight");
    else if (BMI<25)
        printf("Your BMI VALUES is Normal");
    else if (BMI<30)
        printf("Your BMI VALUES is Overweight");
    else
        printf("Your BMI VALUES is Obese");

    printf("\n\n");

    printf("-------------BMI VALUES------------\n");
    printf("Underweight : less than 18.5\n");
    printf("Normal : between 18.5 and 24.9\n");
    printf("Overweight : between 25 and 29.9\n");
    printf("Obese : 30 or greater\n");
    printf("-----------------------------------\n");
    
    return 0;
}