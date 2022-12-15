#include "main.h"

/**
 * more_numbers- prints 0-14 ten times
 *
 *Return: void
 */

void more_numbers(void)
{
	int x, ab;

	for (x = 0; x < 10; x++)
	{
		for (ab = 0; ab < 15; ab++)
		{
			if (ab >= 10)
				_putchar((ab / 10) + 48);
			_putchar((ab % 10) + 48);
		}
		_putchar('\n');
	}
}
