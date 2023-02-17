#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	char b = 'a';

	while (b <= 'z')
	{
		putchar(b);
		b++;
	}

	b = 'A';

	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}

	putchar('\n');
	return (0);
}
