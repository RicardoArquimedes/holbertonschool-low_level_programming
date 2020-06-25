#include "holberton.h"
/**
 *_strncat - copy string to another string.
 *@dest: char
 *@src: char
 *@n: char
 *Return: dest
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int h;
	int w;

	for (h = 0; dest[h] != '\0'; h++)
	{
	}
	for (w = 0; w < n && src[w] != '\0'; w++)
	{
		dest[h + w] = src[w];
	}
	return (dest);
}
