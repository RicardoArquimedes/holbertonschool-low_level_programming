#include "holberton.h"
/**
* _memset  - fill the memory
* @s: character
* @b: character
* @n: int
* Return: s
*
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
