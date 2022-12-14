#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_to_98- prints the natural numbers
 * from declared value to 98.
 *
 * @n: parameter
 *
 * Description: prints only natural numbers
 *
 * Return: void.
 */

void print_to_98(int n);

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
