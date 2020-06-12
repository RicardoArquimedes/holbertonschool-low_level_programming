#include <stdio.h>

/**
 * main - loop through variables a,b,c printing digits
 *
 * Return: print to stdout all possible different combinations of three digits
 */
int main(void)
{
	int a = 0;
	int b;

	while (a <= 98) /*run following while a less than or equal to 98*/
	{
		b = a + 1; /*b is always one more than a*/
		while (b <= 99) /*run following until b equal to 99*/
		{
			putchar(a / 10 % 10 + '0');
			putchar(a % 10 + '0');
			putchar(' ');
			putchar(b / 10 % 10 + '0');
			putchar(b % 10 + '0');
			if (a == 98 && b == 99)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++; /*increment this loop by 1*/
	}
	return (0);
}
