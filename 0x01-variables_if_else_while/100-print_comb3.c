#include <stdio.h>
/**
 * main- prints the possible double
 * combination of numbers from 0-9.
 * Return: 0 if successful.
 */

int main(void)
{
	int n, a;

	n = 48;
	a = 48;

	while (a < 58)
	{
		n = 48;
		while (n < 58)
		{
			if (a != n && a < n)
			{
				putchar(a);
				putchar(n);
				if (n == 57 && a == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			n++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
