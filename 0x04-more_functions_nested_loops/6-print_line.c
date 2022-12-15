#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_line- prints a linee as long as the
 * parameter
 * @n: parameter.
 *
 * Return: 0 if successful
 */

void print_line(int n)
{
	int y;
	int x = '_';

	for (y = 0; y < n; y++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
