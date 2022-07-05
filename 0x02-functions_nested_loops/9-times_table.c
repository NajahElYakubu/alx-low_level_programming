#include "main.h"

/**
 * times_table - a 9 multiplication times table
 */

void times_table(void)
{
	int x, y, mul;

	for (x = 0, x <= 9, x++)
	{
		for (y = 0, y <= 9, y++)
		{
			mul = x * y;
			if (y == 0)
				_putchar ('0' + mul);
			else if (mul < 10)
			{
				_putchar (' ');
				_putchar ('0' + mul);
			}
			else
			{
				_putchar('0' + (mul / 10));
				_putchar('0' + (mul % 10));
			}
			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
