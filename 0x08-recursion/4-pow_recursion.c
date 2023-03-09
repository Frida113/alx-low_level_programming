#include "main.h"
/**
 * _pow_recursion - writes the return values of x raised to power of y
 * @x: the integer
 * @y: the integer power
 *
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
