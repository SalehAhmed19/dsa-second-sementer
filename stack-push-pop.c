#include <stdio.h>
#define CAPACITY 3
int stack[CAPACITY];
int top = -1;

void push(int x)
{
    if (top < CAPACITY - 1)
    {
        top = top + 1;
        stack[top] = x;
        printf("Successfully added item: %d\n", x);
    }
    else
    {
        printf("Exception: Stack overflow\n");
    }
}

int pop()
{
    if (top >= 0)
    {
        int value = stack[top];
        top = top - 1;
        return value;
    }

    printf("Exeption: Empty stack\n");
    return -1;
}

int main()
{
    push(10);
    push(20);
    push(12);
    printf("Pop item: %d\n", pop());
    push(12);
    return 0;
}