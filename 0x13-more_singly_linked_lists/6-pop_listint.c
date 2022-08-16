#include "lists.h"

/**
 * pop_listint -  function that deletes the head node of a listint_t
 * linked list, and returns the head node data(n).
 * @head: pointer to *head
 * Return: data
 */

int pop_listint(listint_t **head)
{
	listint_t *tp;
	int my_data;

	if (*head == NULL)
		return (0);

	tp = *head;
	*head = tp->next;
	my_data = tp->n;
	free(tp);
	return (my_data);
}
