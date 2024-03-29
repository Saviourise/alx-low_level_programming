#include "lists.h"

/**
 * list_len - returns the number of elements
 * @h: parameter
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t num;

	num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
