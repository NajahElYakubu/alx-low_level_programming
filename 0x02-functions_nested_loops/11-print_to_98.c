#include "main.h"

/**
 * print - print variable using _putchar
 * @y: number to start from
 */

void print(int y);

/**
 * print_to_98 - printing numbers from n to 98
 * @a: number to start from
 */

void print_to_98(int a)
{
	int lastnum = 98;

	if (a > lastnum)
	{
		int n;

		for (n = a; n >= lastnum; n--)
		{
			print(n);
			if (n != lastnum)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

	}
	else
	{
		int x;

		for (x = a; x <= lastnum; x++)
		{
			print(x);
			if (x != lastnum)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
/**
 * print - to print
 * @y: var
 */
void print(int y)

{
	if (y < 0)
	{
		_putchar('-');
		y = -y;
	}
	if (y / 10)
		print(y / 10);
	_putchar(y % 10 + '0');
}

