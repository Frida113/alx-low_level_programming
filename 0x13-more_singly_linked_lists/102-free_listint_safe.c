#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint_safe - frees a listint linked list safely
 * @h: pointer to the head of the list
 * Return: the size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *curr_node = *h, *next_node = NULL;
	size_t count = 0;

	while (curr_node != NULL)
	{
		next_node = curr_node->next;
		free(curr_node);
		count++;

		if (next_node <= curr_node)
		{
			*h = NULL;
			break;
		}

		curr_node = next_node;

	}

	return (count);

}
