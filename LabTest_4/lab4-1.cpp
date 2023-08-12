#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gen_dice_number(int *, int);
void calc_prob(int *, int *, double *, int);

int main()
{
    int dice[100], freq[6];
    double prob[6];
    srand(time(NULL));
    // function call
    gen_dice_number(dice, 100);

    calc_prob(dice, freq, prob, 100);
    // print the probabilities
    printf("Probabilities of each dice number\n");
    for (int i = 0; i < 6; i++)
        printf("%d: %.2lf (%d/%d)\n", i + 1, prob[i], freq[i], 100);
    return 0;
}
void gen_dice_number(int *dice, int num)
{
    // randomly generates dice number
    for (int i = 0; i < num; i++)
    {
        dice[i] = (rand() % 6) + 1;
    }
}
void calc_prob(int *dice, int *freq, double *prob, int num)
{
    for (int i = 0; i < num; i++)
    {
        switch (dice[i])
        {
        case 1:
            freq[0] += 1;
            break;
        case 2:
            freq[1] += 1;
            break;
        case 3:
            freq[2] += 1;
            break;
        case 4:
            freq[3] += 1;
            break;
        case 5:
            freq[4] += 1;
            break;
        case 6:
            freq[5] += 1;
            break;
        default:
            printf("This number is not 1~6");
        }
        for (int j = 0; j < 6; j++)
        {
            prob[j] = (double)freq[j] / 100.;
        }
    }
}