#include "main.h"
/**
 * factorial - writes the factorial of a given number
 * @n: the number
 *
 * Return: 0
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
