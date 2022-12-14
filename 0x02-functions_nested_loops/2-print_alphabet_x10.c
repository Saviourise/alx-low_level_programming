#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10- prints the alphabets ten times on
 * different lines followed by a new line
 * Return: 0 if successful
 */

void print_alphabet_x10(void);

void print_alphabet_x10(void)
{
	int x, y;

	for (y = 0; y < 10; y++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			printf("%c", x);
		}
		putchar('\n');
	}
}
