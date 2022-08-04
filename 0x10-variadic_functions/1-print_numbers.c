#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - body of function
 * @seperator: string
 * @n: number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (i != (n - 1) && seperator != NULL)
			printf("%s", seperator)
	}
	printf("\n");

	va_end(list);
}
