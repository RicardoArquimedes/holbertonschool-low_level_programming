#include "holberton.h"
/**
 * print_alphabet - print_alphabet
 *
 * Return: Always sucess 0
 */

void print_alphabet(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

}
