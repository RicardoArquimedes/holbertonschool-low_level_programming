#include "holberton.h"
/**
 *print_line - d
 *@n: integer
 *
 *Return - print line n spaces long to stdout; print newline if n<=0
 */

void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
			_putchar('_');
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
