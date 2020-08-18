#include<stdio.h>

int main()
{
    char s1[100], s2[100];
    int i;

    printf("Enter Binary string s1\n");
    scanf("%s", s1);
    printf("Enter the Binary string s2\n");
    scanf("%s", s2);
    if(str_bin_check(s1)==-1){
        printf("string s1 is not valid");
        return;
    }
    if(str_bin_check(s2)==-1){
        printf("string s2 is not valid");
        return;
    }

    printf("Result=%d\n", add_str(s1, s2));
}


int str_bin(char num[])
{
    int n=0, i;
    int len = strlen(num)-1;

    for(i=0;i<strlen(num);i++){
        if(num[i] == '0'){
            n= (0*(1<<len)) + n;
        }
        else if(num[i] == '1'){
            n= (1*(1<<len)) + n;
        }
        len--;
    }
    return n;
}

int dec_bin(int n) {
    int bin = 0;
    int rem, i = 1, step = 1;
    while (n != 0) {
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }
    return bin;
}

int add_str(char s1[], char s2[])
{
    int num1, num2, res;
    num1 = str_bin(s1);
    num2 = str_bin(s2);
    res = dec_bin(num1+num2);
    return res;
}

int str_bin_check(char str[])
{
    int i;

    for (i = 0; i < strlen(str); i++)
    {
        if ((str[i] - '0' != 1 ) && (str[i] - '0' != 0))
        {
            return -1;
        }
    }
    return 0;
}
