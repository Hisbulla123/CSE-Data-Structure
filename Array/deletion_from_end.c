
#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int n = 5, i;

    n--;

    printf("Array after deletion: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}