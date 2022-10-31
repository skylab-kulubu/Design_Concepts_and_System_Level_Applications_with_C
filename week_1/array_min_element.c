#include <stdio.h>

int main()
{

	int n, i, min;
	int arr[50];

	printf("Please enter length of the array(max:50): ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("%d. element of the array: ", i);
		scanf("%d", &arr[i]);
	}
	printf("\nGiven array:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}

	min = arr[0];
	for (i = 1; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}

	printf("\n\n\n");
	printf("Minimum value of the array:");
	printf("%d\n", min);

	return 0;
}
