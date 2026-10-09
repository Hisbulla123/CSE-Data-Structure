#include <stdio.h>

int main()
{
    int a[100] = {10, 20, 30, 40};
    int n = 4, item, i;

    printf("Original Array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("Enter new item to insert at the last: ");
    scanf("%d", &item);

    a[n] = item;
    n++;

    printf("Array after insertion: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}