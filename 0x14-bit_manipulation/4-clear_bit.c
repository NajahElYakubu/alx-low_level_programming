#include "main.h"

/**
 * clear_bit - function body
 * @n: pointer
 * @index: position
 * Return: 1 if success, else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (-1);
}
