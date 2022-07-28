#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - body of function
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of str2
 * Return: result
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2) <= n ? strlen(s2) : n;
	ptr = malloc(len1 + len2 + 1);

	if (ptr == NULL)
		return (NULL);

	strcpy(ptr, s1);
	strncat(ptr, s2, n);

	return (ptr);
}
