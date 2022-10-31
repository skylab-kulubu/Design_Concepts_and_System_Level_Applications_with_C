#include <stdio.h>

int main()
{

	int n, arr[50], i, x;

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

	printf("\nPlease enter the element you wish to find: ");
	scanf("%d", &x);

	i = 0;
	while (i < n && arr[i] != x)
	{
		i++;
	}

	if (arr[i] == x)
	{
		printf("Array contains the given value.\nValue: %d  Index: %d\n", x, i);
	}
	else
	{

		printf("Array does not contain the given value.\n");
	}

	return 0;
}
