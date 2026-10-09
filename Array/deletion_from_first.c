#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int n = 5, i;

    for (i = 0; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    n--;

    printf("Array after deletion: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}