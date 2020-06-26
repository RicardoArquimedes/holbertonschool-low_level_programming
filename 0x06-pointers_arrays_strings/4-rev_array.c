#include "holberton.h"
/**
 * reverse_array - reverse the array
 * @a:integer
 * @n:integer
 *
*/

void reverse_array(int *a, int n)
{
	char tmp;
	int end, c;

	end = n - 1;
for (c = 0; c < n / 2; c++)
{
	tmp  = a[c];
	a[c] = a[end];
	a[end] = tmp;

	end--;
}
}
