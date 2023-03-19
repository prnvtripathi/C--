#include <stdio.h>
int main()
{
    int a[10], b[10], c[20], n1, n2, i, j, k = 0;
    printf("Enter array1 size : ");
    scanf("%d", &n1);

    printf("\nEnter array2 size : ");
    scanf("%d", &n2);

    printf("\nEnter array1 element : ");
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("\nEnter array2 element : ");
    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    printf("Intersection: ");
    for (i = 0; i < n2; i++)
    {
        for (j = 0; j < n1; j++)
        {
            if (b[i] == a[j])
            {
                c[k++] = b[i];
            }
        }
    }

    for (i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }
    return 0;
}