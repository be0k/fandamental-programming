#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int lotto_num[6];
    // srand
    time_t current_time;
    current_time = time(NULL);
    srand(current_time);
    // num generation
    for(int i=0; i<6; i++)
    {
        lotto_num[i]=(rand()%45)+1;
        for(int j=0; j<i; j++)
        {
            if(lotto_num[i]==lotto_num[j])
                i--;
        }
    }
    // result
    printf("Lotto Numbers: ");
    for (int i = 0; i < 6; i++)
    printf("%02d ", lotto_num[i]);
    printf("\n");
    return 0;
}