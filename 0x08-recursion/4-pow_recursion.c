#include <math.h>
#include "main.h"

/**
 * _pow_recursion - body of function
 * @x: integer
 * @y: power
 * Return: -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	return (pow(x, y));
}
