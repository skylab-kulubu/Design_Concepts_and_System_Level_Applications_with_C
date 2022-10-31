#include <stdio.h>
int main()
{

	int a = 128;
	int i;
	int n, bol;
	char byte[7];
	printf("Please enter a number(max:255): ");
	scanf("%d", &n);

	for (i = 0; i < 8; i++)
	{
		bol = n / a;
		if (bol == 1)
		{
			byte[i] = '1';
		}
		else
		{
			byte[i] = '0';
		}
		n %= a;
		a /= 2;
	}

	printf("\nResult: %s\n", byte);

	return 0;
}
