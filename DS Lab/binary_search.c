// Binary search in an array
#include <stdio.h>

int binary_search(int a[], int length, int target)
{
    int l = 0,
        h = length - 1, mid;
    while (l <= h)
    {
        mid = l + (h - l) / 2;
        if (a[mid] == target)
            return mid;
        else if (a[mid] < target)
            l = mid + 1;
        else
            h = mid - 1;
    }
    return -1;
}

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = sizeof(a) / sizeof(a[0]);
    int x = binary_search(a, length, 6);
    printf("%d", x);
    return 0;
}