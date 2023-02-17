#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int n=0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n<7)
	printf("7 is positive\n");
       if (n=0)
	       printf("0 is zero\n");
       if (n>-4)
	       printf("-4 is negative\n");
	return (0);
}
