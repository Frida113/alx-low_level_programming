#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for 101-crackme
 * Return: Always 0
 */

int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	sum = 0;
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		_putchar(c);
	}
	_putchar(2772 - sum);
	return (0);
}