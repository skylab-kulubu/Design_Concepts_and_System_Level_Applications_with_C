#include <stdio.h>

int main()
{

	int factorial = 1;
	int n, i;

	printf("Please enter the factorial wishes to be calculated: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		factorial = factorial * i;
	}

	printf("%d\n", factorial);

	return 0;
}
