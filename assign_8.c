#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *mem;
    mem = (int *)malloc(3*1000*8);
    if(mem != NULL)
        printf("Memory 3kB is allocated, address=%p\n", mem);
    else
        printf("Failed to allocate Memory 3kB\n");

    mem = (int *)realloc(mem, 5*1000*8);
    if(mem != NULL)
        printf("Memory 5kB is allocated, address=%p\n", mem);
    else
        printf("Failed to allocate Memory 5kB\n");
}
