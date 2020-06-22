#include <stdio.h>

/**
 *main - prints first 50 fibonacci numbers
 *
 *
 *Return: returns 0
 */
int main(void)
{
	long c, f, l, i;

	c = 0;
	f = 3;
	i = 1;
	l = 2;
	printf("1, 2, ");
	while (c < 47)
	{
		printf("%ld, ", f);
		i = l;
		l = f;
		f = i + l;
		c++;
	}
	printf("%ld\n", f);

	return (0);
}
