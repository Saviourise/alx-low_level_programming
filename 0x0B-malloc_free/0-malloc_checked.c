#include <stdio.h>
#include "main.h"

/**
 * malloc_checked -  it  allocates memory using malloc.
 * @b: parameter.
 *
 * Return: the the pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(b));
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
