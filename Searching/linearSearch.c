// Also known as Sequential search
#include <stdio.h>

int linearSearch(int a[], int n, int target)
{
    for (int i = 0; i < n; i++)
        if (a[i] == target)
            return i;
    return -1;
}

int main()
{
    int a[] = {2, 5, 6, 1, 9, 3, 8};
    int n = sizeof(a) / sizeof(a[0]);

    printf("The element is at index %d", linearSearch(a, n, 3));

    return 0;
}