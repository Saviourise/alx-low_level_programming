#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_diagonal- Ptints a diagonal line
 * @n: parameter
 *
 * Return: void.
 */

void print_diagonal(int n)
{
	int x = '\\';

	int y, z;

	for (y = 0; y < n; y++)
	{
		for (z = 0; z < y; z++)
		{
			_putchar(' ');
		}
		_putchar(x);
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
