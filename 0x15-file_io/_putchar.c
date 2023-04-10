#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c
 * @c: the character
 * Return: 1 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
