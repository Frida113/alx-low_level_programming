#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list
 * Return: number of nodes printed
 */

size_t print_list(cont list_h *h)
{
	size_t n = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;

		n++;

	}
	return (n);
}
