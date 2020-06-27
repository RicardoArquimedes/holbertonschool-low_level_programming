#include <stdio.h>

/**
 * main - Print the numbers fibonacci
 *
 * z: Integer
 * i: Result
 * Return: On success 1.
 *
 */
int main(void)
{
	int x = 1, y = 2, z = 0, i = 2;

	while (z < 4000000)
	{
		z = x + y;
		x = y;
		y = z;

		if (z % 2 == 0)
		{
			i = z + i;
		}
	}
	printf("%d\n", i);
	return (0);
}
