#include "main.h"

/**
 * get_bit - body of function
 * @n: number
 * @index: position
 * Return: bit at position
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return ((n >> index) & 1);
}
