#include <stdio.h>

void selection(int a[], int n)
{
    for (int i = 0; i < n - 1; i++) // moving the boundary of unsorted array one by one
    {
        int small = i; // minimum element in the unsorted array
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[small]) //check if any else minimum element is present or not
                small = j;
        //swap the found minimum element with the first element
        int temp = a[small];
        a[small] = a[i];
        a[i] = temp;
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
    selection(a, 8);
    display(a, 8);
    return 0;
}