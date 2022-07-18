#include <string.h>
#include "main.h"

/**
 * _strspn - main body
 * @s: string of initial segment
 * @accept: prefix
 * Return: result
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
