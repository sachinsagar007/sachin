#include<stdio.h>

typedef struct{
int num;
char ch;
}enc ;

void encode(char str[])
{

    int len=strlen(str), i, j, count=1;
    char encstr[100];
    enc e1[len];

    for(i=0,j=0;i<len;i++)
    {
        if(str[i]==str[i+1]) {
            count=count+1;
        }
        else {
            encstr[j]=str[i];
            encstr[j+1]=count + 48;
            count=1;
            j=j+2;
        }

    }
    printf("encoded=%s\n", encstr);
}
int main()
{
    char str[25];
    printf("Enter a input\n");
    scanf("%s", str);
    encode(str);
}
