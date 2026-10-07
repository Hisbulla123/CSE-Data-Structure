#include <stdio.h>
int main()
{
    int A[10] = {10, 20, 30, 40, 50};
    int n = 5;
    int pos = 2;
    int value = 99;
    printf("Original Array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    for (int i = n - 1; i >= pos; i--)
    {
        A[i + 1] = A[i];
    }
    A[pos] = value;
    n++;
    printf("After insertion :");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}