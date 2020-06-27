#include <stdio.h>
/**
 * main - Print factor
 *
 * Return: 0
 *
 */
int main(void)
{
	long int n, d;

	d = 2;
	n = 612852475143;
	while (n != 1)
	{
		if (n % d != 0)
			d++;
		else
		{
			n = n / d;
			if (d > n)
				printf("%ld", d);
		}
	}
	putchar('\n');
	return (0);
}
