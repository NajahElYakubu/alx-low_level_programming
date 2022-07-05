#include "main.h"

/**
 * print_alphabet_x10 - print alphabets in lowercase x10
 * Return: void
 */

void print_alphabet_x10(void)
{
	int zz;

	for (zz = 0; zz <= 10; zz++)
	{
		int jj;

		for (jj = 'a'; jj <= 'z'; jj++)
			_putchar (jj);
		_putchar('\n');
	}
}
