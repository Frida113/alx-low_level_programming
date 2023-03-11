#include "main.h"
/**
 * _putchar - put character c
 * @c: the character
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
