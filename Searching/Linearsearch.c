#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int item, i;

    printf("Enter number to search: ");
    scanf("%d", &item);

    for (i = 0; i < 5; i++)
    {
        if (a[i] == item)
        {
            printf("Item found at position %d", i + 1);
            return 0;
        }
    }

    printf("Item not found");

    return 0;
}