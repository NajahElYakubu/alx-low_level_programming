#include "main.h"

/**
 * print_alphabet - print alphabets in lowercase
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
	return (0);
}
