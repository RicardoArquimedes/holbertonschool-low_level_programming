#include <stdio.h>
/**
 * main - the largest prime factor of the number
 *
 * Return: 0 Always
 */
int main(void)
{
	long y, z;

	y = 2;
	z = 612852475143;

	for (y = 2; y <= z; y++)
	{
		if (z % y == 0)
		{
			while (z % y == 0)
				z = z / y;
		}
	}
	printf("%ld\n", y - 1);
	return (0);
}
