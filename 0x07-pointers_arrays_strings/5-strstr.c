#include "holberton.h"
/**
  * _strstr - locates a substring.
  * @haystack: C string to be scanned.
  * @needle: C string containing the sequence of characters to match.
  * Return: ()
  */
char *_strstr(char *haystack, char *needle)
{
	int a;
	int b;

	if (*needle == '\0')
		return (haystack);
	if (*needle == 0)
		return (haystack);

	for (a = 0; haystack[a] != '\0'; a++)
	{
		b = 0;
		while (haystack[a + b] == needle[b])
			b++;
		if (needle[b] == '\0')
			return (&haystack[a]);
	}
	return ('\0');
}
