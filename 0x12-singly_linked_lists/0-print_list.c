#include "lists.h"

/**
 * print_list - Prints all the available lists
 * @h: parameter
 *
 * Return: the number of list.
 */

size_t print_list(const list_t *h)
{
	size_t value;

	value = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] (%s)\n", 0, "nil");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		value++;
	}
	return (value);
}
