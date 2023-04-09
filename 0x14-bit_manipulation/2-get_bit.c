#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the value
 * @index: the index
 * Return: the valie of the bit at index or
 * -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value = (n >> index) & 1;
	{
		return (bit_value);
	}

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
}
