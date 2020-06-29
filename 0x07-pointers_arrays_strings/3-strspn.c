#include "holberton.h"
/**
  * _strspn - gets the length of a prefix substring..
  * @s: C string to be scanned.
  * @accept: C string containing the characters to match.
  * Return: ()
  */
unsigned int _strspn(char *s, char *accept)
{
	int x;
	char *n;

	for (x = 0; *s; s++, x++)
	{
		for (n = accept; *n && *n != *s; n++)
		{
		}
		if (*n == '\0')
			break;
	}
	return (x);
}
