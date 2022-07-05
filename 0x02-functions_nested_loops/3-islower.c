#include "main.h"

/**
 * _islower - function that checks for lowercase characters
 * Return: 1 if c is lowercase or 0 if otherwise
 * @c: character to be checked
 */

int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
