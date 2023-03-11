#include "main.h"
#include <unistd.h>
/**
 * _putchar - put character c
 * @c: the character
 * Return: On success 1
 * On error, -1 is returned,and error is set appropraitely
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
