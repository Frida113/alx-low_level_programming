#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: integer to be swapped with @b
 * @b: integer to be swapped @a
 *
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
