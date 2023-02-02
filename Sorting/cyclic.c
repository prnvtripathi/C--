//only used when array is given with format of 1-N elements
#include <stdio.h>

void cycle(int a[], int n)
{
    int i = 0;
    while (i < n)
    {
        int correctIndex = a[i] - 1;
        if (a[i] != a[correctIndex])
        {
            //swapping
            int temp = a[i];
            a[i] = a[correctIndex];
            a[correctIndex] = temp;
        }
        else
            i++;
    }
}

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%3d", a[i]);
}

int main()
{
    int a[] = {6, 2, 4, 1, 7, 3, 8, 5};
    display(a, 8);
    printf("\n");
    cycle(a, 8);
    display(a, 8);
    return 0;
}

/*
The numbers given in the array is always in a range of 1-N
like in the main function array contains numbers from 1-8
*/