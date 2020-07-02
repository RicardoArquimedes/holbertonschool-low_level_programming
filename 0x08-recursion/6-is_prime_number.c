#include "holberton.h"
/**
 * prime - find the prime
 * @n: number
 * @prim: prime numbers
 * Return: value
 */
int prime(int n, int prim)
{
	if (n == prim)
		return (1);
	else if ((n % prim) != 0)
		return (prime(n, prim + 2));
	else
		return (0);
}
/**
 * is_prime_number - the number is prime
 * @n: number
 * Return: 1, 0
 */
int is_prime_number(int n)
{
	if ((n == 1) || (n < 0) || (n == 2) || (n == 3))
		return (0);
	else if ((n % 2) == 0)
		return (0);
	return (prime(n, 3));
}
