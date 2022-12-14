#include <stdio.h>
#include "main.h"
/**
 * print_alphabet- prints all alphabets in lower case
 * Return: 0 if successful
 */
void print_alphabet(void);

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
}
