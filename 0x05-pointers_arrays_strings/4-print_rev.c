#include "holberton.h"

/**
 *print_rev - print on reverse
 *@s: integer
 *
 */

void print_rev(char *s)
{
	int rev = 0;

	while (s[rev] != '\0')
	{
		rev++;
	}
	for (rev = rev - 1; rev >= 0; rev--)
	{
	_putchar(s[rev]);
	}
	_putchar('\n');
}
