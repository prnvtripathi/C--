#include <stdio.h>

void findCart(int a[], int b[], int m, int n)
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            printf("(%d, %d) ", a[i], b[j]);
}

int main()
{
    int a[10], b[10], m, n;
    printf("Enter first set size(max 10): ");
    scanf("%d", &m);
    printf("Enter first set elements: \n");
    for (int i = 0; i < m; i++)
        scanf("%d", &a[i]);

    printf("Enter second set size(max 10): ");
    scanf("%d", &n);
    printf("Enter second set elements: \n");
    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);

    findCart(a, b, m, n);
    return 0;
}