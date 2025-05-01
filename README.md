# Data Structure - Second Semester
## Push - Pop in Stack:
### Logic:  

**Push:**
```
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
```

**Pop Method:**
```
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
```
