#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * _isalpha- checks if a character is an alphabet or not
 * @c: represents the character.
 *
 * Return: 1 if it is a character or 0 if it is not
 */

int _isalpha(int c);

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	return (0);
}
