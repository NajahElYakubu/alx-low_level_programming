#include <stdio.h>
#include "main.h"

/**
 * print_array - main body
 * @a: array
 * @n: number of elements
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ")
	}
	putchar('\n');
}
