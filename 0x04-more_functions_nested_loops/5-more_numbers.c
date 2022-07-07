#include "main.h"

/**
 * print - local variable
 * @var: variable
 */
void print(int var)
{
	if (var < 0)
	{
		_putchar('-');
		var = -var;
	}
	if (var / 10)
		print (var / 10);
	_putchar(var % 10 + '0');
}

/**
 * more_numbers - main body
 */

void more_numbers(void)
{
	int x = 0;

	while (x < 10)
	{
		int y = 0;

		do {
			if (y < 10)
				print (y);
			else
			{
				print (y);
			}
			y++;
		} while (y < 15);
		x++;
		_putchar ('\n');
	}
}
