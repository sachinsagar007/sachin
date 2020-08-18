#include<stdio.h>

int main()
{
    char s1[100], s2[100];
    int i;

    printf("Enter the string s1\n");
    scanf("%s", s1);

    printf("Enter the string s2\n");
    scanf("%s", s2);

    for(i=0;i<strlen(s1);i++)
        if(s1[i]==s2[i])
            continue;
        else {
            printf("Strings are not Matched\n");
            return;
        }
        printf("Strings are Matched\n");



}
