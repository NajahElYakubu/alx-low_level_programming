#include "lists.h"
/**
 * listint_t *add_nodeint_end - function that adds a new node
 * at the end of a list
 * @head: pointer to *head
 * @n: integer to adress of new_node
 * Return: new_node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last_node = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
	}
	else
		return (NULL);
	if (last_node != NULL)
	{
		while (last_node->next != NULL)
			last_node = last_node->next;

		last_node->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}
