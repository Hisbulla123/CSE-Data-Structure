#include <stdio.h>

int main()
{
    int a[10] = {10, 20, 30, 40};
    int n = 4, item, i;

    printf("Enter new item: ");
    scanf("%d", &item);

    for (i = n; i > 0; i--)
    {
        a[i] = a[i - 1];
    }

    a[0] = item;
    n++;

    printf("Array after insertion: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}