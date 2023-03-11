#include "main.h"
/**
 * _strlen - Main Entry
 * @s: the string
 * Return: length of @s
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
