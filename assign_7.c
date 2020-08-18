#include<stdio.h>
int main()
{
    int a, b, c;
    int count = 0, i, n1, n2, n3, next, n;

    printf("Enter the input A\n");
    scanf("%d",&a);
     printf("Enter the input B\n");
    scanf("%d",&b);
    printf("Enter the input B\n");
    scanf("%d",&c);

    printf("Enter the Nth number needed\n");
    scanf("%d",&n);
    n1=a;n2=b;n3=c;
    n=n-3;
    for(i=0;i<n;i++){
            next=n1+n2+n3;
        n1=n2;n2=n3;n3=next;
    }
    printf("Nth number=%d", next);
}
