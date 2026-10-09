#include <stdio.h>

int main()
{
    int a[100] = {10, 20, 30, 40, 50};

    int n = 5, item, pos, i;

    printf("Original Array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("Enter position to insert: ");
    scanf("%d", &pos);

    printf("Enter new item: ");
    scanf("%d", &item);

    for (i = n; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos - 1] = item;
    n++;

    printf("Array after insertion: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}