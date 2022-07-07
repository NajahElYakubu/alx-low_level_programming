#include "main.h"

/**
 * print_diagonal - main body
 * @n: variable
 */

void print_diagonal(int n)
{
	if (n < 1)
		_putchar('\n');
	else
	{
		int x;

		for (x = 1; x <= n; x++)
		{
			int y;

			for (y = 1; y <= x; y++)
			{
				if (x == y)
					_putchar('\\');
				else
					_putchar(' ');
			}
			 _putchar('\n');
		}
	}
}
