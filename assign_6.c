#include<stdio.h>

int main()
{
    int A, B;
    int count = 0, i;

    printf("Enter the input A\n");
    scanf("%d",&A);
    printf("Enter the input B\n");
    scanf("%d",&B);

    printf("A=%d\n", A+B);
    if((A-B) < 0)
        printf("B=%d\n", ~(A-B)+1);
    else
        printf("A=%d\n", A-B);
}
