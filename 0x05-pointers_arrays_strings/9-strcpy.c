#include "holberton.h"
/**
 **_strcpy - copy pointer
 * @dest: character
 * @src: character
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int z;

	for (z = 0; *(src + z) != '\0'; z++)
	{
		*(dest + z) = *(src + z);
	}

	return (dest);
}
