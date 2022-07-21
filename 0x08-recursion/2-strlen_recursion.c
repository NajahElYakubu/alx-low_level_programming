#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - main body
 * @s: string
 * Return: 0 (Success)
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
		return (0);
	return (strlen(s));
}
