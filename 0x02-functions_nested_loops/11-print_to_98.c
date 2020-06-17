#include <stdio.h>

/**
 * print_to_98 - increasing and decreasing until 98
 *
 * @n: input
 *
 */
void print_to_98(int n)
{

		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}

		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("98\n");
}
