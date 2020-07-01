#include "holberton.h"

/**
 * _print_rev_recursion - print a string on reverse
 * @s: string:
 * Return: void
 */

void _print_rev_recursion(char *s)

{
	while (*s)

	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
		break;
	}
}
