#include <string.h>
#include "main.h"

/**
 * _memset - main body
 * @s: pointer
 * @b: constant byte
 * @n: number of bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

