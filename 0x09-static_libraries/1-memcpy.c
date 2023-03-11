#include "main.h"
/**
 * _memcpy - Main Entry
 * @dest: input
 * @src: source
 * @n: number
 * Return: value of @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i;

	for (i = n; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
