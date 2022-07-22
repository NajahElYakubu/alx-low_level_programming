#include <string.h>
#include "main.h"

/**
 * *_strcpy - main body
 * Return: return to dest
 * @src: pointer of the string to be copied from
 * @dest: pointer of the destination to be copied to
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
