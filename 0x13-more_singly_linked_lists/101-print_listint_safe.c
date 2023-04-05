#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: the pointer to the list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *curr_node = head, *prev_node = NULL;
	size_t count = 0;

	while (curr_node != NULL)
	{
		printf("[%p] %d\n", (void *) curr_node, curr_node->n);
		count++;

		if (curr_node < prev_node)
		{
			printf("-> [%p] %d\n", (void *) curr_node->next, curr_node->next->n);
			break;
		}

		prev_node = curr_node;
		curr_node = curr_node->next;
	}

	if (curr_node != NULL && curr_node < prev_node)
	{
		printf("-> [%p] %d\n", (void *) curr_node->next, curr_node->next->n);
		exit(98);
	}

	return (count);
}
