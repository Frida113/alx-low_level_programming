#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: charachter
 * Return: print 98  if fail
 */

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
