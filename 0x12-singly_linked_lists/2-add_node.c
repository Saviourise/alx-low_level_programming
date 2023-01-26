#include "lists.h"

/**
 * add_node - adds a node to the beginning of a
 * linked list.
 * @head: parameter 1
 * @str: parameter 2
 *
 * Return: head address.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t value;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);

	for (value = 0; str[value]; value++)
		;

	new->len = value;
	new->next = *head;
	*head = new;

	return (*head);
}
