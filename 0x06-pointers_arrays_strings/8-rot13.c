#include "holberton.h"

/**
 * rot13 - encode a string into rot13
 * @s: Pointer to Char
 * Return: s
 */

char *rot13(char *s)
{
	int x = 0;
	int y = 0;

	char *s1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *s2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[x] != '\0')
	{
		while (s1[y] != '\0')
		{
			if (s[x] == s1[y])
			{
				s[x] = s2[y];
			}
			y++;
		}
		y = 0;
		x++;
	}
	return (s);
}
