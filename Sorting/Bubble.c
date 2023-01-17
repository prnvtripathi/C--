#include <stdio.h>

void bubble(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        // for each iteration, maximum element will at be last
        for (int j = 1; j < n - i; j++)
        {
            // compare and swap if item is smaller than prev item
            if (a[j] < a[j - 1])
            {
                // swapping values
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }
}

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%3d", a[i]);
    }
}

int main()
{
    int a[] = {12, 54, -23, 67, -12, 34, 23, 11};
    display(a, 8);
    printf("\n");
    bubble(a, 8);
    display(a, 8);
    return 0;
}