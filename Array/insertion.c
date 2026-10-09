#include <stdio.h>

int main()
{
    int a[100] = {10, 20, 30};
    int n = 3, pos, item, i;

    printf("Enter position: ");
    scanf("%d", &pos);

    printf("Enter new element: ");
    scanf("%d", &item);

    if (pos < 1 || pos > n + 1)
    {
        printf("Invalid position");
    }
    else
    {
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
    }

    return 0;
}