#include <stdio.h>
/**
 * main - finds and prints the largest prime factor of the number
 *
 * Return: 0 Always
 */
int main(void)
{
	long a, i;

	i = 2;
	a = 612852475143;

	for (i = 2; i <= a; i++)
	{
		if (a % i == 0)
		{
			while (a % i == 0)
				a = a / i;
		}
	}
	printf("%ld\n", i - 1);
	return (0);
}
