#include <stdio.h>
/**
 *main - write a program that computes and prints the sum of
 * all the multiples of 3 or 5 below 1024 (excluded)
 * i: Integer
 * z: Result
 * Return: 0
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
