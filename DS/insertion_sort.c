#include <math.h>
#include <stdio.h>

// Function to sort an array using insertion sort
void insertionSort(int arr[], int n)
{
	int temp, i, j;
	for (i = 1; i < n; i++)
	{
		temp = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] < temp)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = temp;
	}
}

void display(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main()
{
	int arr[10], n;

	printf("Enter the size of array: ");
	scanf("%d", &n);
	printf("Enter the elements: ");

	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	insertionSort(arr, n);
	display(arr, n);

	return 0;
}