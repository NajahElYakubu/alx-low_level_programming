#include <stdio.h>

/**
 * main - program that prints the first 98 Fibonacci numbers,
 * Return: 0 (Success)
 */

int main(void)
{
	long int n1 = 1, n2 = 2, result, nlast = 98;
	int x;

	printf("%lu, %lu, ", n1, n2);
	for (x = 2; x < nlast; x++)
	{
		result = n1 + n2;
		n1 = n2;
		n2 = result;
		printf("%lu", result);
		if (x != nlast - 1)
			printf(", ");
	}
	printf("\n");
	return (0);
}
