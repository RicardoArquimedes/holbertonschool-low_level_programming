#include "holberton.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: string to convert
 * Return: s capitalizes
 */


char *cap_string(char *s)
{
	int j = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (j == 0)

		{
			if (s[j] >= 'a' && s[j] <= 'z')
			{
				s[j] -= 32;
			}

			else if (s[j] == ' ' || s[j] == '\t'
			    || s[j] == '\n'
			    || s[j] == ','
			    || s[j] == ';'
			    || s[j] == '.'
			    || s[j] == '!'
			    || s[j] == '?'
			    || s[j] == '('
			    || s[j] == ')'
			    || s[j] == '{'
			    || s[j] == '}')
			{

				s[j] -= 32;
			}
		}

	}
	return (s);
}
