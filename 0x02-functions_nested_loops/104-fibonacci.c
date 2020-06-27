#include <stdio.h>

/**
 * main - Prints the sum of multiples of 3 or 5 to 1024
 *@i: integer
 * Return: On success 1.
 *
 */

int main(void)
{
	int i;
	float x, y, z;

	x = 1;
	y = 2;
	z = 0;

	printf("1, 2");
	for (i = 1; i <= 96; i++)
	{
		z = x + y;
		x = y;
		y = z;
		printf(", %.0f", z);
	}
	putchar('\n');
	return (0);
}
