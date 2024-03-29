#include "main.h"
#include <stdlib.h>

/**
 * _strdup - body of funtion
 * @str: string
 * Return: copy of str
 */
char *_strdup(char *str)
{
	char *copy;
	int i;
	int len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;
	copy = (char *)malloc((sizeof(char) * len) + 1);
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		copy[i] = str[i];
	copy[len] = '\0';

	return (copy);
}
