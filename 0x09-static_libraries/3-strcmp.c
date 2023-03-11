#include "main.h"
/**
 * _strcmp - Main Entry
 * @s1: input
 * @s2: input
 * Return: 0 if equal or if it is different
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int b = 0;

	while (s1[a] != '\0' && b == 0)
	{
		b = s1[a] - s2[a];
		a++;
	}
	return (b);
}
