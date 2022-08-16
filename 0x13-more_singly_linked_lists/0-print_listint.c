#include "lists.h"

/**
 * print_listint - function that prints all elements of a list
 * @h: pointer to head
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int num = 0;

	while (h)
	{
		num++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num);
}
