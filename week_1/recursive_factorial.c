#include <stdio.h>

int find_fact(int);

int main()
{
	int n, factorial;

	printf("Please enter the factorial wishes to be calculated: ");
	scanf("%d", &n);

	factorial = find_fact(n);
	printf("Result: %d\n", factorial);
	return 0;
}

int find_fact(int say)
{
	if (say == 1 || say == 0)
	{
		return 1;
	}
	else
	{
		return say * find_fact(say - 1);
	}
}