#include <string.h>
#include "main.h"

/**
 * _memcpy - main body
 * @dest: pointer to destination
 * @n: number of bytes
 * @src: source
 * Return: result
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, strlen(src) + n);

	return (0);
}
