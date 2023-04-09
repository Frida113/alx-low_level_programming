#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: constant character b
 * Return: the converted number or 0 if:
 * there is one or more char in the string b that is not 0 or 1
 * :if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		x = (x << 1) + (*b - '0');
		b++;

	}

	return (x);

	if (b == NULL)
		return (0);
}
