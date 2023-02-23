#include <stdio.h>

void insert(int A[], int index, int x, int *p)
{ // inserts a new element at the given index
    int i;
    if (index >= 0 && index <= *p && *p < 10)
    {
        for (i = *p; i > index; i--)
            A[i] = A[i - 1];
        A[index] = x;
        *p = *p + 1;
    }
    else
        printf("Insertion failed for index %d\n", index);
}

void display(int A[], int length)
{
    int i;
    for (i = 0; i < length; i++)
    {
        printf("%3d", A[i]);
    }
}

int main()
{
    int a[10];
    int length, index, value;
    printf("Enter the length of the array: ");
    scanf("%d", &length);

    printf("Enter the elements of the array: ");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &a[i]);
    }
    display(a, length);
    printf("\nEnter the index : ");
    scanf("%d", &index);
    printf("Enter the value : ");
    scanf("%d", &value);

    insert(a, index, value, &length);
    display(a, length);

    return 0;
}