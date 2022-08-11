#include "lists.h"

/**
 * add_node_end - function that adds a new node at the
 * end of a list
 * @head: pointer to head
 * @str: pointer to str
 * Return: new_node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last_node = *head;
	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last_node->next)
		last_node = last_node->next;

	last_node->next = new_node;

	return (new_node);
}
