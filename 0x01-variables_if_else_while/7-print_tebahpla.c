#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar('%s', a);
		a++;
	}
	putchar('\n');
	return (0);
}
