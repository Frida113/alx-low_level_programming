#include "main.h"

/**
 * more_numbers - print 0 to 14 10 times
 *
 */
void more_numbers(void)
{
	int a, c;

	for (a = 0; a <= 9; a++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
			{
				_putchar ((c / 10) + '0');
			}
			_putchar ((c % 10) + '0');
		}
		_putchar('\n');
	}
}
