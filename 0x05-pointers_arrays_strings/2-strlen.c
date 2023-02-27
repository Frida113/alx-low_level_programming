#include "main.h"

/**
 * _strlen - returns the length of the string s
 * @s: the string
 *
 * Return: length of @s
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
