#include "main.h"

/**
 * print_numbers - prints the numbers 0 to 9
 */
void print_numbers(void)
{
	int i = 0;

	do {
		_putchar(i + 48);
		i++;
	} while (i >= 0 && i <= 9);

	_putchar('\n');
}
