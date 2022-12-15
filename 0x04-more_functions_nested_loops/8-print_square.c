#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_square- prints a square with #.
 * @size: parameter.
 *
 * Return: 0.
 */

void print_square(int size)
{
	int x, y;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
