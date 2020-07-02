#include "holberton.h"
/**
 * len - length of a string.
 * @p: string
 * Return:len
 */

int len(char *p)
{
	if (*p  == '\0')
		return (0);
	return (1 + len(p + 1));
}
/**
 * pali - It tells me if a string is palindrome.
 * @a: string
 * @b: value
 * @c: value
 * Return: 1 o 0 respectively if is palindrome or no.
 */
int pali(char *a, int b, int c)
{
	if (b  > c)
		return (1);
	else if (a[b] == a[c])
		return (pali(a, b + 1, c - 1));
	return (0);
}
/**
 * is_palindrome - The string is a palindrome
 * @s: string
 * Return: value
 */
int is_palindrome(char *s)
{
	int end;

	end = len(s) - 1;
	return (pali(s, 0, end));
}
