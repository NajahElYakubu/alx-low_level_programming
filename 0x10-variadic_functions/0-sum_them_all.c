#include "variadic_functions.h"
/**
 * sum_them_all - body of function
 * @n: count
 * Return: reult
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list params;

	if (n == 0)
	{
		return (0);
	}

	sum = 0;
	va_start(params, n);

	for (i = 0; i < n; i++)
		sum += va_arg(params, int);
	va_end(params);

	return (sum);
}
