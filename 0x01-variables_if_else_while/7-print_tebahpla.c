#include <stdio.h>
/**
 * main- prints a-z in reverse
 * Return: 0 if successful
 */

int main(void)
{
	char za;

	for (za = 'z'; za >= 'a'; za--)
	{
		putchar(za);
	}
	putchar('\n');
	return (0);
}
