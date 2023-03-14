#include "main.h"
#include <stdlib.h>

/**
 * _putchar - prints the character c
 * @c: the character
 * Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
