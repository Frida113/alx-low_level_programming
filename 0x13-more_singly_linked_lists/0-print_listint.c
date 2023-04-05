#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of a listint_t
 * @h: pointer to the head
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while ((h != NULL) || (h != 0))
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
