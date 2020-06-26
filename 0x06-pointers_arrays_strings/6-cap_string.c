#include "holberton.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: string to convert
 * Return: s capitalizes
 */
char *cap_string(char *s)
{
	int ch;

	for (ch = 0; s[ch] != '\0'; ch++)
	{
		if (ch == 0)
		{
			if (s[ch] >= 'a' && s[ch] <= 'z')
			{
				s[ch] = s[ch] - 32;
			}
		}
		else
		{
			if (s[ch] == ' ' || s[ch] == '\t'
			    || s[ch] == '\n'
			    || s[ch] == ','
			    || s[ch] == ';'
			    || s[ch] == '.'
			    || s[ch] == '!'
			    || s[ch] == '?'
			    || s[ch] == '('
			    || s[ch] == ')'
			    || s[ch] == '{'
			    || s[ch] == '}')
			{
				if (s[ch + 1] >= 'a' && s[ch + 1] <= 'z')
					s[ch + 1] = s[ch + 1] - 32;
			}
		}

	}
	return (s);
}
