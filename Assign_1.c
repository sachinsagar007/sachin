#include<stdio.h>
int main()
{
    int A, B;
    int count = 0, i;

    printf("Enter the input A\n");
    scanf("%d",&A);
    printf("Enter the input B\n");
    scanf("%d",&B);

    for(i=0;i<32;i++)
        if(((A>>i) & 1) != ((B>>i) & 1))
            count++;
    printf("No of bits to be flipped =%d\n", count);
}
