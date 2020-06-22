#include <stdio.h>

/**
 *main - prints first 50 fibonacci numbers
 *
 *
 *Return: returns 0
 */
int main(void)
{
	long a, b, c, d;

	a = 0;
	b = 3;
	c = 1;
	d = 2;
	printf("1, 2, ");
	while (a < 47)
	{
		printf("%ld, ", b);
		d = c;
		c = b;
		b = c + d;
		a++;
	}
	printf("%ld\n", b);

	return (0);
}
