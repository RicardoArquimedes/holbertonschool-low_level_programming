#include "holberton.h"
/**
 * _strcmp - compare the values of a string
 * @s1: character
 * @s2: character
 * @str: int
 */

int _strcmp(char *s1, char *s2)
{

        int str = 0;
	
        while ((s1[str] ==  s2[str]) && (s1[str] != '\0'))
         

	{
		str++;
	}
        return (s1[str] -s2[str]);
}

