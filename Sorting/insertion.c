#include <stdio.h>

void insertion(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            if (a[j] < a[j - 1])
            {
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
            else
                break;
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
    int a[] = {12, 54, 38, 67, 72, 34, 23, 11};
    display(a, 8);
    printf("\n");
    insertion(a, 8);
    display(a, 8);
    return 0;
}