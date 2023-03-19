#include <stdio.h>

void removeElement(int A[], int index, int *p)
{ // removeElements the given index
    int i;
    if (index >= 0 && index <= *p)
    {
        for (i = index; i < *p - 1; i++)
            A[i] = A[i + 1];
        *p = *p - 1;
    }
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
    int *p = &length;
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

    removeElement(a, index, &length);
    display(a, length);

    return 0;
}