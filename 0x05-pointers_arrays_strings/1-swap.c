#include <stdio.h>
#include "main.h"

/**
 * main - main body
 * Return: 0 (Success)
 */

int main(void)
{
	int n1, n2;

	swap_int(&n1, &n2);
	return (0);
}

/**
 * swap_int - swap function
 * @a: first value
 * @b: second value
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
