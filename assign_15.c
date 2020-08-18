#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

typedef struct node
{
    int data;
    struct node *next;
}node;

node *top;

void initialize()
{
    top = NULL;
}

void push(int value)
{
    node *tmp;
    tmp = malloc(sizeof(node));
    tmp -> data = value;
    tmp -> next = top;
    top = tmp;
}

int pop()
{
    node *tmp;
    int n;
    tmp = top;
    n = tmp->data;
    top = top->next;
    free(tmp);
    return n;
}

int Top()
{
    return top->data;
}

int isempty()
{
    return top==NULL;
}

void display(node *head)
{
    if(head == NULL)
    {
        printf("NULL\n");
    }
    else
    {
        printf("%d\n", head -> data);
        display(head->next);
    }
}

int main()
{
    initialize();
    push(12);
    push(24);
    push(25);
    printf("The last data is %d\n",Top());
    pop();
    printf("The last data after pop is %d\n",Top());
    display(top);
    return 0;
}
