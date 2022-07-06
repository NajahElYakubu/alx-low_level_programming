#include <stdio.h>

/**
 * main - prints the sum of all mutiples of 3 and 5 below 1024
 * Return: 0 (Success)
 */
int main(void)

{
	int x, _sum;

	for (x = 3; x < 1024; x++)
	{
		if (x % 3 == 0 || x % 5 == 0)
			_sum += x;
	}
	printf("%d\n", _sum);
	return (0);
}
