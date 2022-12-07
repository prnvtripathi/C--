#include <stdio.h>
#include <stdlib.h>

void indexedSequentialSearch(int arr[], int n, int k)
{
    int GN = 3;
    int elements[GN], indices[GN], i, set = 0;
    int j = 0, ind = 0, start, end;
    for (i = 0; i < n; i += 3)
    {
        elements[ind] = arr[i];
        indices[ind] = i;
        ind++;
    }
    if (k < elements[0])
    {
        printf("Not found");
        exit(0);
    }
    else
    {
        for (i = 1; i <= ind; i++)
            if (k <= elements[i])
            {
                start = indices[i - 1];
                end = indices[i];
                set = 1;
                break;
            }
    }
    if (set == 0)
    {
        start = indices[GN - 1];
        end = GN;
    }
    for (i = start; i <= end; i++)
    {
        if (k == arr[i])
        {
            j = 1;
            break;
        }
    }
    if (j == 1)
        printf("Found at index %d", i);
    else
        printf("Not found");
}

void main()
{

    int arr[] = {6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    int k = 9;
    indexedSequentialSearch(arr, n, k);
}
