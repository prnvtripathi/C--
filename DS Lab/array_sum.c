#include<stdio.h>

int sum(int A[], int length){                   // returns the sum of the elements of A
    int i, sum = 0;
    for(i=0 ; i < length; i++){
        sum = sum + A[i];
    }
    return sum;
}

void display(int A[], int length){
    int i;
    for(i=0 ; i < length; i++){
        printf("%3d", A[i]);
    }
}

int main()
{
    int a[10];
    int length, s = 0;
    printf("Enter the length of the array: ");
    scanf("%d", &length);

    printf("Enter the elements of the array: ");
    for(int i = 0; i < length; i++){
        scanf("%d", &a[i]);
    }
    display(a, length);
    s = sum(a, length);
    printf("\nThe sum of the elements of the array: %d", s);
    return 0;
}