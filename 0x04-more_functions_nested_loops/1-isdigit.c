#include "holberton.h"

/**
 *_isdigit - search for the digit character.
 *
 *@c: c - variable
 *Return: Always 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
