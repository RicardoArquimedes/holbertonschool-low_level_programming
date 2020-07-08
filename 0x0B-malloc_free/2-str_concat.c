#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Write a function that concatenates two strings.
 *
 * @s1: array 1
 * @s2: array 2
 *
 * Return: Pointer
 */
char *str_concat(char *s1, char *s2)
{
	int a, b, c, d;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	a = 0, b = 0;
	while (*(s1 + a) != '\0')
		a++;
	while (*(s2 + b) != '\0')
		b++;

	concat = malloc(a + b + 1);

	if (concat == 0)
	{
		return (0);
	}

	for (c = 0; c < a; c++)
	{
		*(concat + c) = *(s1 + c);
	}
	for (b = 0, d = a; c < b; d++, c++)
	{
		*(concat + d) = *(s2 + c);
	}
	*(concat + d) = '\0';
	return (concat);
}
