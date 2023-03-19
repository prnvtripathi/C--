#include <stdio.h>

int main()
{
    int a[10], temp, size;

    printf("Enter size of array (max 10): ");
    scanf("%d", &size);

    printf("Enter the array elements: \n");

    for(int i = 0; i < size; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
        printf("%d ", a[i]);
    

    return 0;
}