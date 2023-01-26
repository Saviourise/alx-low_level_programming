#include "lists.h"

/**
 * add_node_end - it that adds a new node at the end of a list_t list.
 * @head: parameter 1.
 * @str: parameter 2.
 *
 * Return: the head address.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
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
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (*head);
}
