#include <stdio.h>

int main()
{
    int a[10], i, j, min_idx, temp, size;

    printf("Enter size of array (max 10): ");
    scanf("%d", &size);

    printf("Enter the array elements: \n");

    for (int i = 0; i < size; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < size - 1; i++)
    {
        min_idx = i;

        for (j = i + 1; j < size; j++)
            if (a[min_idx] > a[j])
                min_idx = j;

        if (min_idx != i)
        {
            temp = a[i];
            a[i] = a[min_idx];
            a[min_idx] = temp;
        }
    }

    for (int i = 0; i < 5; i++)
        printf("%d ", a[i]);

    return 0;
}