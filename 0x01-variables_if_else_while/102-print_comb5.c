#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 0;
	int c2;
	int f_d, l_d, f_d2, l_d2;
	int first_pair = 1;

	while (c <= 98)
	{
		f_d = c / 10;
		l_d = c % 10;
		c2 = c + 1;

		while (c2 <= 99)
		{
			f_d2 = c2 / 10;
			l_d2 = c2 % 10;
			
			if (!first_pair)
			{
				putchar(',');
				putchar(' ');
			}
			putchar(f_d + '0');
			putchar(l_d + '0');
			putchar(' ');
			putchar(f_d2 + '0');
			putchar(l_d2 + '0');

			first_pair = 0;

			c2++;
		}

		c++;
	}

	putchar('\n');
	return (0);
}
