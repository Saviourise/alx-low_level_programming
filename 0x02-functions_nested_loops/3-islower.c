#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
/**
 * _islower- returns 1 is the value is lower case
 * and 0 if it is not.
 * @c: alphabet to be checked
 *
 * Description: nothing to describe here
 * self explanatory.
 * Return: 1 if lowercase and 0 if not
 */
int _islower(int c);

int _islower(int c)
{
	if (islower(c))
		return (1);
		else
	{
		return (0);
	}
}
