#include <string.h>
#include "main.h"

/**
 * puts_half - main body
 * @str: pointer to string
 */

void puts_half(char *str)
{
	int len = strlen(str), i;

	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = (len / 2) + 1; i < len; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
