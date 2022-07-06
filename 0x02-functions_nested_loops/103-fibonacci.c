#include <stdio.h>

/**
 * main - a program that finds and prints
 * the sum of the even-valued terms
 * Return: 0 (Success)
 */

int main(void)
{
	int x = 1, y = 2, total;
	int k;

	while (y < 4000000)
	{
		if (y % 2 == 0)
			total += y;

		k = y;
		y += x;
		x = k;
	}
	printf("%d\n", total);
	return (0);
}
