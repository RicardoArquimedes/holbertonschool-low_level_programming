#include "holberton.h"

/**
 * swap_int - swap int and update the value
 *
 *@a: integer
 *@b: integer
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
