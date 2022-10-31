#include <stdio.h>

int fibonacci_iterative(int);
int fibonacci_recursive(int);

int main(int argc, char const *argv[])
{

	int n;
	printf("Please enter the step of fibonacci wishes to be calculated: ");
	scanf("%d", &n);
	printf("Iterative fibonacci: %d\n", fibonacci_iterative(n));
	printf("Recursive fibonacci: %d\n", fibonacci_recursive(n));

	return 0;
}

int fibonacci_recursive(int n)
{
	if (n == 0 || n == 1)
	{
		return 1;
	}
	else
	{
		return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
	}
}

int fibonacci_iterative(int n)
{

	// 1, 1, 2, 3, 5, 8

	int i;

	int value, new = 1, old = 1;

	if (n == 0 || n == 1)
	{
		return 1;
	}
	else
	{
		for (i = 0; i < n - 1; i++)
		{
			value = new + old;
			old = new;
			new = value;
		}
		return value;
	}
}
