#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers,
 * Return: 0 (Success)
 */
int main(void)
{
	long int n1 = 1, result, n2 = 2, nLast = 50;
	int x;

	printf("%lu, %lu, ", n1, n2);
	for (x = 2; x < nLast; x++)
	{
		result = n1 + n2;
		n1 = n2;
		n2 = result;
		printf("%lu", result);
		if (x != nLast - 1)
			printf(", ");
	}
	printf("\n");
	return (0);
}
