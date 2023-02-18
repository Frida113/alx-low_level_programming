#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	char a;

	int b;

	a = 'a';
	b = 0;
	while (b < 10)
	{
		putchar(b + '0');
		b++;
	}
	while (a < 'g')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
