#include "holberton.h"
/**
 **_strcpy - copy pointer
 * @dest: character
 * @src: character
 *Return: dest
 */
char *_strcpy(char *dest, char *src)

{
	int x = 0, y;

	while (src[x] != '\0')
		x++;
	for (y = 0; y <= x; y++)
	{
		dest[y] = src[y];
	}
	return (dest);
}
