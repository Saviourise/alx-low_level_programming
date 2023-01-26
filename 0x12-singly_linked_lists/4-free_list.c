#include "lists.h"

/**
 * free_list - it frees a list_t list.
 * @head: parameter.
 *
 * Return: void.
 */

void free_list(list_t *head)
{
	list_t *value;

	while ((value = head) != NULL)
	{
		head = head->next;
		free(value->str);
		free(value);
	}
}
