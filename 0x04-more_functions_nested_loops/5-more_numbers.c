#include "main.h"

/**
 * more_numbers - print 0 to 14 10 times
 *
 */
void more_numbers(void)
{
	int a, b, c;

	for(b = 1; b <= 10; b++)
	{
		for (c = 0; c <= 14; c++)
		{
			a = c;
			if (c > 9)
			{
				_putchar (1 + 48);
				b = c % 10;
			}
			_putchar (num + 48);
		}
		_putchar('\n');
	}
}
