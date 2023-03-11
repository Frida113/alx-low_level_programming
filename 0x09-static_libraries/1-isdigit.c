#include "main.h"
#include <time.h>
#include <stdio.h>
/**
 * _isdigit - prints numbers
 * @c: the character
 * Return: 0
 */
int _isdigit(int c)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last = n % 10;
	if (last > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, last);
	if (last == 0)
		printf("Last digit of %i is %i and is 0\n", n, last);
	if (last < 6 && last != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last);
	return (0);
}
