#include "main.h"

/**
 * reverse_array - main body
 * @a: array
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0; i < n / 2; i++)
	{
		j = n - i - 1;
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
