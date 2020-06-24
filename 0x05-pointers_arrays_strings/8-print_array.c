#include "holberton.h"
#include <stdio.h>
/**
 * print_array - print array entry
 *
 *@n: integer
 *@a: int
 */


void print_array(int *a, int n)
{
	int p;

	for (p = 0; p < n; p++)
	{
		printf("%d", a[p]);
		if (p < n - 1)
		{
		printf(", ");
		}
	}
	printf("\n");
}
