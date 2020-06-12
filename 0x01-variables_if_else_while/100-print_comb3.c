#include <stdio.h>

/**
 * main - loop through variables a and b, printing digits
 *
 * Return: print to stdout all possible different combinations of two digits
 */
int main(void)
{
	int a = '0'; /*declare variable a as integer and equal to 0*/
	int b; /*declare variable b as integer*/

	while (a <= '9') /*run following while a less than or equal to 9*/
	{
		b = a + 1; /*b is always one more than a*/
		while (b <= '9') /*run following until b equal to 9*/
		{
			putchar(a); /*print character a*/
			putchar(b); /*print character b*/
			if (a == '8' && b == '9') /*if a=8 AND b=9*/
			{
				putchar('\n'); /*then print a newline*/
			}
			else /*do following when if statement not met*/
			{
				putchar(','); /*print comma*/
				putchar(' '); /*print space*/
			}
			b++; /*increment this loop by 1*/
		}
		a++; /*increment this loop by 1*/
	}
	return (0);
}
