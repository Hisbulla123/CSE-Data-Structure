#include <stdio.h>

int main()
{
    int a[100] = {10, 20, 30, 40, 50};
    int n = 5, pos, i;

    printf("Original Array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("Enter position to delete (1 to %d): ", n);
    scanf("%d", &pos);

    if (pos < 1 || pos > n)
    {
        printf("Invalid position! Please enter a valid position.\n");
    }
    else
    {
        for (i = pos - 1; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }

        n--;

        printf("Array after deletion: ");
        for (i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
    }

    return 0;
}