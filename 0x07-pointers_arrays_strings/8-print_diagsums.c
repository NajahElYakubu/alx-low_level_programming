#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - main body
 * @a: array
 * @size: size
 */

void print_diagsums(int *a, int size)
{
	int i, row;
	int firstDiagonalSum = 0;
	int secondDiagonalSum = 0;
	int total = size * size;

	for (i = 0; i < total; i += size)
	{
		row = i / size;
		firstDiagonalSum += a[i + row];
		secondDiagonalSum += a[i + size - row - 1];
	}
	printf("%d, %d\n", firstDiagonalSum, secondDiagonalSum);
}
