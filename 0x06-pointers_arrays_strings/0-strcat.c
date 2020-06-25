#include "holberton.h"
/**
 *_strcat - copy string to another string.
 *@dest: char
 *@src: char
 *Return: dest
 *
 */

char *_strcat(char *dest, char *src)
{
	int d = 0, s = 0;

	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[s] != '\0')
	{
		dest[d + s] = src[s];
		s++;
	}
	return (dest);
}
