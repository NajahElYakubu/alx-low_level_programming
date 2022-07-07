#include <ctype.h>
#include "main.h"

/**
 * _isdigit - main body
 * Return: 1 if success, 0 if failure
 * @c: variable
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
