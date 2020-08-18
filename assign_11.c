#include<stdio.h>

int swap_bits(unsigned int n)
{
    int pos_e,pos_r;
    unsigned int bit1, bit2,x, result;

   for(pos_e=2,pos_r=1;pos_e<32;pos_e=pos_e+2, pos_r=pos_r+2){

    bit1 =  (n >> pos_e) & 1;
    bit2 =  (n >> pos_r) & 1;

    x = (bit1 ^ bit2);
    x = (x << pos_e) | (x << pos_r);

    result = n ^ x;
    n=result;
   }
   return result;
}

int main()
{
    int n , res;

    printf("Enter the input\n");
    scanf("%d",&n);

    printf("Before swapping bits = %d\n", n);
    res =  swap_bits(n);
    printf("After swapping bits = %d ", res);
    return 0;
}
