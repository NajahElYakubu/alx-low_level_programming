#include <string.h>
#include "main.h"

/**
 * _strcat - main body
 * @dest:first string
 * @src: second string
 * Return: result
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
