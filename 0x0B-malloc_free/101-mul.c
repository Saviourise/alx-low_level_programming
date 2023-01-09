#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - it multiplies two positive numbers.
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 if successful
 */

int main(int argc, char **argv)
{
	unsigned long multiply;
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	multiply = atol(argv[1]) *  atol(argv[2]);
	printf("%lu\n", multiply);
	return (0);
}
