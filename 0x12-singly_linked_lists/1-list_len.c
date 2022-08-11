#include "lists.h"

/**
 * list_len - function that returns number of elements
 * in a linked list
 * @h: head
 * Return: count
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
