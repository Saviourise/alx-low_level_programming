#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _isupper - returns 1 if it is uppercase
 * else 0.
 * @c: parameter.
 *
 * Return: void.
 */

int _isupper(int c);

int _isupper(int c)
{
	if (isupper(c))
		return (1);

		return (0);
}
