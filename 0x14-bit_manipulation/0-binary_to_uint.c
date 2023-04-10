#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to the string
 * Return: the converted number or 0 if:
 * there is one or more char in the string b that is not 0 or 1
 * :if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		x <<= 1;
		x += (b[i] - '0');
		i++;

	}

	return (x);
}
