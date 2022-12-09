#include <stdio.h>
/**
 * main- prints a set of nubers and
 * alphabet
 * Return: o if successful
 */

int main(void)
{
	int n;
	char a;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
