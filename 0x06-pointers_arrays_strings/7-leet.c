#include "holberton.h"
/**
 * leet  - convert to leet 1733 code
 *@s:integer
 *
 * Return: s
 */
char *leet(char *s)
{
	int ch = 0;

	while (s[ch] != '\0')
	{
		while (s[ch] == 'a' || s[ch] == 'A')
			s[ch] = '4';
		while (s[ch] == 'e' || s[ch] == 'E')
			s[ch] = '3';
		while (s[ch] == 'o' || s[ch] == 'O')
			s[ch] = '0';
		while (s[ch] == 't' || s[ch] == 'T')
			s[ch] = '7';
		while (s[ch] == 'l' || s[ch] == 'L')
			s[ch] = '1';
		ch++;
	}
	return (s);
}
