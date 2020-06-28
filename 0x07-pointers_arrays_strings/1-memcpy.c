#include "holberton.h"
/**
 * _memcpy - fill the memory
 * @dest: character
 * @src: character
 * @n: int
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
