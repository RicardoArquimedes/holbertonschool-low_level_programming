#include "holberton.h"
/**
 * puts2 - puts2 entry poin
 *
 *@str: integer
 */

void puts2(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (x % 2 == 0)
			_putchar(str[x]);
	}
	_putchar('\n');
}
