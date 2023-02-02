#include <stdio.h>
#include <stdlib.h>

int GN = 3; // group number, showing number of elements in a group

void indexedSequentialSearch(int arr[], int n, int target)
{

    int elements[GN], indices[GN], i, set = 0;
    int flag = 0, ind = 0, start, end;

    for (i = 0; i < n; i += 3)
    {
        elements[ind] = arr[i]; // element stored
        indices[ind] = i;       // index stored
        ind++;
    }

    if (target < elements[0])
    {
        printf("Not Found!");
        return;
    }

    else
    {
        for (i = 1; i < ind; i++)
        {
            if (target <= elements[i])
            {
                start = indices[i - 1];
                end = indices[i];
                set = 1;
                break;
            }
        }
    }

    if (set == 0)
    {
        start = indices[GN - 1];
        end = GN;
    }

    for (i = start; i <= end; i++)
    {
        if (target == arr[i])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        printf("Found at index %d", i);
    else
        printf("Not found");
}

int main()
{

    int arr[] = {6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 12;
    indexedSequentialSearch(arr, n, target);
    return 0;
}
