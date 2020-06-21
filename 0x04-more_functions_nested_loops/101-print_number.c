#include "holberton.h"
/**
 * print_number - function that prints an integer.
 * @n: integer
 * Return: integer printed
 */
void print_number(int n)
{
	int k, d = 1, c = 1, a, i, count = 0;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	i = n;
	i--;
	while (n / 10 != 0)
	{
		n /= 10;
		c = c * 10;
		count++;
	}
	if ((count == 1) || (count == 0))
		i++;
	_putchar((i / c) + '0');
	for (a = 1; a <= count; a++)
	{
		d = c / 10;
		k = i % c;
		k /= d;
		if ((a == count) && (a >= 3))
			k++;
		_putchar(k + '0');
		c = c / 10;
	}
}
