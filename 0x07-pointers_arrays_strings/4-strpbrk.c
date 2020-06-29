#include "holberton.h"
/**
  * _strspn - gets the length of a prefix substring..
  * @s: C string to be scanned.
  * @accept: C string containing the characters to match.
  * Return: ()
  */
char *_strpbrk(char *s, char *accept)
{
	int a;

while (*s != '\0')
{
for (a = 0; accept[a] != '\0'; a++)
{
if (*s == accept[a])
return (s);
}
s++;
}
return ('\0');
}
