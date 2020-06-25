#include "holberton.h"
/**
 *_strcat - string concatanate
 *
 *@dest: char
 *@src: char
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
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d + s] = '\0';
	return (dest);
}
