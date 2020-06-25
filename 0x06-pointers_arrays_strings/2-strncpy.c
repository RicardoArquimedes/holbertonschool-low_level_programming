#include "holberton.h"
/**
 *_strncpy
 *@n: integer
 *@dest: character
 *@src: character
 *Return:dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	{
		int w;

		for (w = 0; w < n && src[w] != '\0'; w++)
			dest[w] = src[w];
		for ( ; w < n; w++)
			dest[w] = '\0';
		return (dest);
	}
}
