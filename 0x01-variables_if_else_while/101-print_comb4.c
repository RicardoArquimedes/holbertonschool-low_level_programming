#include <stdio.h>

/**
 * main - loop through variables a,b,c printing digits
 *
 * Return: print to stdout all possible different combinations of three digits
 */
int main(void)
{
	int a = '0'; /*declare variable a as integer and equal to 0*/
	int b; /*declare variable b as integer*/
	int c;

	while (a <= '7') /*run following while a less than or equal to 9*/
	{
		b = a + 1; /*b is always one more than a*/
		while (b <= '8') /*run following until b equal to 9*/
		{
			c = b + 1;
			while (c <= '9')
			{
				putchar(a); /*print character a*/
				putchar(b); /*print character b*/
				putchar(c);
				if (a == '7' && b == '8' && c == '9') /*if a=8 AND b=9*/
				{
					putchar('\n'); /*then print a newline*/
				}
				else /*do following when if statement not met*/
				{
					putchar(','); /*print comma*/
					putchar(' '); /*print space*/
				}
				c++; /*increment this loop by 1*/
			}
			b++;
		}
		a++; /*increment this loop by 1*/
	}
	return (0);
}
