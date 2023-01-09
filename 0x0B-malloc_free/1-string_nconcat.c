#include "main.h"

/**
 * string_nconcat - it concatinates two strings
 * @s1: first parameter
 * @s2: second parameter
 * @n: third parameter
 *
 * Return: the pointer to the concatenation
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1 = 0, len2 = 0, i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n > len2)
	{
		n = len2;
	}
	ptr = malloc((len1 + n + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (0);
	}
	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (; i < (len1 + n); i++)
	{
		ptr[i] = s2[i - len1];
	}
	ptr[i] = '\0';
	return (ptr);
}
