#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - body of function
 * @size: size
 * @nmemb: elements
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = calloc(nmemb, size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
