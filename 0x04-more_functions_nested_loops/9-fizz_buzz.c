#include <stdio.h>

/**
 * main- prints 1-100 but prints Fizz if the number
 * is a multiple of 3, Buzz if it is a multiple of 5,and
 * fizzbuzz if it is a multiple of 5 and 3.
 *
 * Return: 0 if successful.
 */

int main(void)
{
	int x = 1;

	for (; x < 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
			printf("FizzBuzz ");
		else if (x % 3 == 0)
			printf("Fizz ");
		else if (x % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", x);
	}
	printf("Buzz\n");

	return (0);
}
