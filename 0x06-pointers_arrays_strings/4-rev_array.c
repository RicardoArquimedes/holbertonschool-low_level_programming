#include "holberton.h"
/**
 * reverse_array - reverse the array of an array integers
 * @a:array of integer
 * @n: the number of the elements of the array
 */

void reverse_array(int *a, int n)
{
	int tmp;
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
