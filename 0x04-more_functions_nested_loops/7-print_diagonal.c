#include "holberton.h"

/**
 *print_diagonal- print a diagonal line on terminal
 *@n: integer
 */
void print_diagonal(int d)
{
	int f, c;

	if (d <= 0)
	{
		_putchar('\n');
	}

	for (f = 1; f <= d; f++)
	{

		for (c = 1  ; c <= d ; c++)
		{

			if (f == c)
				_putchar('\\');
			else
				_putchar(' ');

		}
		_putchar('\n');
	}
}
