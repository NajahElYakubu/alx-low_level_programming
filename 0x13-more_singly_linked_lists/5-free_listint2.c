#include "lists.h"

/**
 * free_listint2 - function that frees a list
 * @head: pointer to *head;
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}