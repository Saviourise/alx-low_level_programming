#include <stdio.h>
/**
 * main- all lower case alphabets without e qnd q.
 * Return: 0 if successful.
 */

int main(void)
{
char az = 'a';
while (az <= 'z')
{
if (az != 'e' && az != 'q')
{
putchar(az);
}
az++;
}
putchar('\n');
return (0);
}
