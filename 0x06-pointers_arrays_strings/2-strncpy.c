#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: a string
 * @src: a string
 * @n: the number of bytes
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	i = i;

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
