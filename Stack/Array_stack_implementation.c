#include <stdio.h>
#define MAX 100
int stack[MAX];
int top = -1;
void push(int item)
{
    if (top == MAX - 1)
    {
        printf("Stack overflow\n");
    }
    else
    {
        top++;
        stack[top] = item;
        printf("%d pushed", item);
    }
}
void pop()
{
    if (top == -1)
    {
        printf("Stack underflow");
    }
    else
    {
        int item = stack[top];
        top--;
        printf("%d poped\n", item);
    }
}