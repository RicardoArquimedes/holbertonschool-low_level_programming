#include "holberton.h"
/**
 * _strcat -- string concatanate
 *
 *@dest: char
 *@src: char
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, c = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[c] != '\0')
	{
		dest[i] = src [c];
		i++;
		c++;
	}

	return (dest);
}
