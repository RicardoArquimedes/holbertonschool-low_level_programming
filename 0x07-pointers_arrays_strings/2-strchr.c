#include "holberton.h"

/**
 * _strchr - string a character
 *@s: character
 *@c: character
 * Return: 0
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
	{
	if (*s == c)
		return (s);
	s++;
	}
return ('\0');
}
