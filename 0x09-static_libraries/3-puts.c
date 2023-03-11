#include "main.h"
/**
 * _puts - Main Entry
 * @s: the string
 *
 */
void _puts(char *s)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n')
}
