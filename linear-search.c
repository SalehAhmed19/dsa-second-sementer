// linear search

#include <stdio.h>
#define CAPACITY 5

int main()
{
    int arr[CAPACITY], search, found = 0;
    printf("Enter elements: \n");
    for (int i = 0; i < CAPACITY; i++)
    {
        printf("index: [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter search element: ");
    scanf("%d", &search);

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
}