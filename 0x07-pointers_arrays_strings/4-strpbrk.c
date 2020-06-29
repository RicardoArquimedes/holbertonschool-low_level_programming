#include "holberton.h"
/**
  * _strpbrk - length of a prefix substring..
  * @s: C string
  * @accept: C string
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
