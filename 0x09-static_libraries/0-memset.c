#include "main.h"
/**
 * _memset - Main Entry
 * @s: input
 * @b: input
 * @n: input
 * Return: new value of target
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
{
	s[n - 1] = b;
	n--;
}
	return (s);
}
