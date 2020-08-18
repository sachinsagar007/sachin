#include <stdio.h>

int sum (int num1, int num2)
{
    return num1+num2;
}

int temp(int (*fun)(int, int))
{
    return (*fun)(5, 6);
}

int main()
{
    int (*fptr) (int, int), res;
    fptr = sum;
    res = temp(fptr);
    printf("res=%d\n", res);
    return 0;
}
