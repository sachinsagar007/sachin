#include<stdio.h>


int main()
{
    struct member {
    int status1:1;
    int status2:1;
    int size:4;
    char data:8;
    };
    struct member m1;
    printf("sizeof(struct member)=%d\n", sizeof(struct member));
}
