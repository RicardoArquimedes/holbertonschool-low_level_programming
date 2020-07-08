#include "holberton.h"
#include <stdlib.h>
/**
 * str_len - size string
 * @s: string
 * Return: (len)
 */
int str_len(char *s)
{
	int len = 0;
	int a;

	for (a = 0; s && s[a] != '\0'; a++)
	{
		len++;
	}
	return (len);
}
/**
 * str_concat - concatenates two strings.
 * @s1: string
 * @s2: string
 * Return: (D)
 */
char *str_concat(char *s1, char *s2)
{
	char *D;
	int a = 0;
	int b;
	int c = str_len(s1) + str_len(s2) + 1;

	D = malloc(sizeof(char) * c);
	if (D == NULL)
	{
		return (NULL);
	}
	for (b = 0; s1 && s1[b] != '\0'; b++)
	{
		D[a] = s1[a];
		a++;
	}
	for (b = 0; s2 && s2[b] != '\0'; b++)
	{
		D[a] = s2[b];
		b++;
	}
	D[a] = '\0';
	return (D);


}
