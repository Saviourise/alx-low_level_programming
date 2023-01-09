#include "main.h"

/**
 * _realloc - it reallocates a memory block using malloc and free
 * @ptr: void pointer parameter
 * @old_size: old size parameter
 * @new_size: new size parameter
 *
 * Return: the void pointer if successful
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *cpy, *ralloc;
	unsigned int i;

	if (ptr != NULL)
	{
		cpy = ptr;
	} else
	{
		return (malloc(new_size));
	}
	if (old_size == new_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	ralloc = malloc(new_size);
	if (ralloc == Null)
	{
		return (0);
	}
	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(ralloc + i) = cpy[i];
	}
	free(ptr);
	return (ralloc);
}
