#include "holberton.h"
/**
 * _isalpha - found the lowercase and uppercase characters.
 *
 * @c: c is the variable for the program.
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	else if (c <= 'Z' && c >= 'A')
		return (1);
	else
		return (0);
}
