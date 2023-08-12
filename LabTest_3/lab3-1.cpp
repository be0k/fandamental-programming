#include <stdio.h>

int num_words(char in[100]);
int num_non_alphabets(char in[100]);

int main() {
    char in_string[100];
    int words_cnt; // number of words
    int non_alpha_cnt; // number of non-alphabets

    // read input
    printf("Type a string: ");
    fgets(in_string,100,stdin);

    // function call
    words_cnt = num_words(in_string);
    non_alpha_cnt = num_non_alphabets(in_string);
    // result
    printf("Number of words = %d\n", words_cnt);
    printf("Number of non-alphabets = %d\n", non_alpha_cnt);
    return 0;
}

int num_words(char in[100]) {
    int i = 0, cnt = 0, sv=0, k;
    while(in[i]!='\0')
    {
        if(in[i]==' ')
        {
            for(k=sv; k<i;k++)
            {
                if(!(in[i]>='A' && in[i]<='Z') && !(in[i]>='a' && in[i]<='z'))
                {
                    break;
                }
            }
        }
        if(k==i)
            cnt++;
        sv = i;
        i++;
    }
    return cnt;
}

int num_non_alphabets(char in[100]) {
    int i=0, cnt=0;
    while(in[i]!=10)
    {
        if(!(in[i]>='A' && in[i]<='Z') && !(in[i]>='a' && in[i]<='z'))
                cnt++;
        i++;
    }
    return cnt;
}
