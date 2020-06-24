#include "holberton.h"
/**
 *_strcpy - copy pointer
 * @dest: character
 * @src: character
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
