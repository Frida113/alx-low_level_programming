#include "main.h"
#include <stdio.h>

/**
 * flip_bits - returns the number of bits needed to be flipped
 * @n: first number
 * @m: second number
 * Return: the number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int num_bits_to_flip = 0;

	while (xor_result != 0)
	{
		num_bits_to_flip += xor_result & 1;
		xor_result >>= 1;
	}

	return (num_bits_to_flip);
}

