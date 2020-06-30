#include "holberton.h"
#include <stdio.h>

/**
 *print_diagsums - print diagsums
 *@a: matriz diag
 *@size: size of
 *Return: 0
 */

void print_diagsums(int *a, int size)
{
	int d;
	int diag1 = 0, diag2 = 0;

	for (d = 0; d < (size * size); (d += (size + 1)))
	diag1 = diag1 + a[d];
	for (d = (size - 1); d < (size * size - 1); (d += (size - 1)))
	diag2 = diag2 + a[d];

	printf("%d, %d\n", diag1, diag2);
}
