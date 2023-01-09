#include "main.h"

/**
 * _memnset - copies char memory
 * @a: first parameter.
 * @b: second parameter
 * @n: third parameter.
 *
 * Return: a.
 */

char *_memnset(char *a, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		a[i] = b;
	}
	return (a);
}
/**
 * _calloc - it allocates memory for an array, using malloc.
 * @nmemb: first parameter
 * @size: second parameter
 *
 * Return: a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	_memnset(ptr, 0, (nmemb * size));
	return (ptr);
}
