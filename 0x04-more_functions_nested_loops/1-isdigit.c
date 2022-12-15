#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _isdigit- checks if the number is between 0-9
 * @c: parameter
 *
 * Description: Number checker or something like that
 *
 * Return: void
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)

		return (1);

	return (0);
}
