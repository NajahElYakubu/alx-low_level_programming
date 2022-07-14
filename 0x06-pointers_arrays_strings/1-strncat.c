#include <string.h>
#include "main.h"

/**
 * _strncat - main body
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 * Return: result
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
