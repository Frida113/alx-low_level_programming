#include "main.h"
/**
 * _strlen_recursion - writes the lenght of a string
 * @s: the string
 *
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursions(s + 1));
	}
	return (0);
}
