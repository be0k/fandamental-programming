#include <stdio.h>

// prototypes of str_len, str_concat
int str_len(char *);
void str_concat(char*,char*,char*);

int main()
{
    char string1[100], string2[100], string_out[200];
    int len1, len2;
    // read two strings
    printf("Enter two strings in order.\n");
    fgets(string1,100,stdin);
    fgets(string2,100,stdin);
    // function call
    len1 = str_len(string1);
    len2 = str_len(string2);
    str_concat(string1, string2, string_out);
    // print the results
    printf("(Results)\n");
    printf("Length: %d %d\n", len1, len2);
    printf("Concatenation: %s\n", string_out);
    return 0;
}
int str_len(char *in)
{   int cnt=0;
    // count the length of the string and return it
    while(in[cnt]!='\0')
    {
        cnt++;
    }
    if(in[cnt-1]=='\n')
        cnt--;
    return cnt;
}

void str_concat(char *in1, char *in2, char *out)
{
    int i=0, j=0;
    // concatenate two strings, in1 and in2 into out
    // while reversely adding the second one, in2
    while(in1[i]!='\0'){
        out[i]=in1[i];
        i++;
    }
    i--;
    while(in2[j]!='\0')
        j++;
    j-=2;
    while(j>=0)
    {
        out[i]=in2[j];
        i++;
        j--;
    }
}