#include <stdio.h>

int length(int a[])
{
    int count = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int binary_search(int a[], int target)
{
    int l = 0,
        h = length(a) - 1, mid;
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
    int x = binary_search(a, 6);
    printf("%d", x);
    return 0;
}