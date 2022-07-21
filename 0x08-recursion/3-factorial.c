#include "main.h"

/**
 * factorial - body of function
 * Return: -1 (error)
 * @n: number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * (factorial(n - 1)));
}
