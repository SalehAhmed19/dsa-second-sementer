# Data Structure - Second Semester
## Push - Pop in Stack:
*Full Code:* [Click here to see full code](https://github.com/SalehAhmed19/dsa-second-sementer/blob/main/stack-push-pop.c)
### Logic:  

**Push Method:**
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

## Linear Search in Array:
*Full Code:* [Click here to see full code](https://github.com/SalehAhmed19/dsa-second-sementer/blob/main/linear-search.c)
### Logic:
**Linear Search:**
```
for (int i = 0; i < CAPACITY; i++)
    {
        if (arr[i] == search)
        {
            printf("Enlement found at index [%d]\n", i);
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("Element not found!\n");
    }
```

## Insertion - Deletion in Array:
*Full Code - (Insertion):* [Click here to see full code]()  
*Full Code - (Deletion):* [Click here to see full code]()
### Logic:
**Deletion:**
```
if (pos <= 0 || pos > size)
    {
        printf("Invalid position!\n");
    }
    else
    {
        for (i = pos - 1; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
            size--;
        }
    }
```
