#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data(n)
 * of a linked list
 * @head: pointer to head
 * Return: sum, 0 if empty
 */

int sum_listint(listint_t *head)
{
	listint_t *cursor = head;
	size_t sum = 0;

	while (cursor != NULL)
	{
		sum += cursor->n;
		cursor = cursor->next;
	}
	return (sum);
}
