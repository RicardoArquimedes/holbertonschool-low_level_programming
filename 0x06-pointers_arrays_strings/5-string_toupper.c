#include "holberton.h"

/**
 * string_toupper - print the string in Uppercase
 *@ch: integer
 *Return: ch
 */



char *string_toupper(char *ch)
{

	int a;

	for (a = 0; ch[a] != '\0'; a++)
	{
		if (ch[a] >= 'a' && ch[a] <= 'z')
			ch[a] = (int) ch[a] - 32;
	}
	return (ch);
}
