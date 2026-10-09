#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int item, beg = 0, end = 4, mid;

    printf("Enter number to search: ");
    scanf("%d", &item);

    while (beg <= end)
    {
        mid = (beg + end) / 2;

        if (a[mid] == item)
        {
            printf("Item found at position %d", mid + 1);
            return 0;
        }
        else if (item < a[mid])
        {
            end = mid - 1;
        }
        else
        {
            beg = mid + 1;
        }
    }

    printf("Item not found");

    return 0;
}