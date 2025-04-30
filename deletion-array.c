#include <stdio.h>

int main()
{
    int size, i, pos;
    printf("Enter size: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter elements: \n");
    for (i = 0; i < size; i++)
    {
        printf("Index: [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nEnter position of the element for deleting: ");
    scanf("%d", &pos);

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
    printf("Updated array is: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}