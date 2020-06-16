#include "holberton.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet inside the loop
 * Description:
 * Return - void
 */
void print_alphabet_x10(void)
{
	char b = 'a';
	int i = 1;

	for (i = 1; i <= 10; ++i)
	{
		for (b = 'a'; b <= 'z'; ++b)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
