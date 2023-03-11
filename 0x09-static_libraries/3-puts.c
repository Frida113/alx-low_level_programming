#include "main.h"
/**
 * _puts - Main Entry
 * @s: the string
 *
 */
void _puts(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
		{
			_putchar('\n');
			break;
		}
	_putchar(s[count]);
	count++;
	}
}
