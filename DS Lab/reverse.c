#include <stdio.h>

void display(int A[], int length)
{
    int i;
    for (i = 0; i < length; i++)
    {
        printf("%3d", A[i]);
    }
}

void reverse(int A[], int length)
{
    int i = 0, j = length - 1, temp;
    while (j > i)
    {
        temp = A[i];
        A[i] = A[j];
        A[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    int a[10], length, i;
    printf("Enter the length of the array: ");
    scanf("%d", &length);
    printf("Enter the array elements: \n");
    for (i = 0; i < length; i++)
    {
        scanf("%d", &a[i]);
    }
    display(a, length);
    reverse(a, length);
    printf("\n");
    display(a, length);
    return 0;
}