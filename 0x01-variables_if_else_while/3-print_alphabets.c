#include <stdio.h>

/**
 * main- print lower case and upper case
 * alphabet in one line and followed by
 * new line
 * Return: 0 if successful.
 */
int main(void)
{
char az;
for (az = 'a'; az <= 'z'; az++)
putchar(az);
for (az = 'A'; az <= 'Z'; az++)
putchar(az);
putchar('\n');
return (0);
}
