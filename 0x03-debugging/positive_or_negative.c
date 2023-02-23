#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print value of n status; zero, positive or negative
 * @i: the number
 * Return: Always 0
 */

void positive_or_negative(int i)
{
	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
