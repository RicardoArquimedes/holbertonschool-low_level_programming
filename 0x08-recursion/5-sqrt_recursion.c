#include "holberton.h"
/**
 * _sqrt - the natural square root
 * @n: number
 * @m: variable
 * Return: square
 */

int _sqrt(int n, int m)
{
	if ((m * m) == n)
		return (m);
	else if ((m * m) > n)
		return (-1);
	return (_sqrt(n, m + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n:number
 * Return: natural square root number
 */
int _sqrt_recursion(int n)
{
	if ((n == 0) || (n == 1))
		return (n);
	else if (n < 0)
		return (-1);
	return (_sqrt(n, 1));
}
