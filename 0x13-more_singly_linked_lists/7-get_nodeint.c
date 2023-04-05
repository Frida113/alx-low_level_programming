#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth npde of a linked list
 * @head: pointer to the list
 * @index: the nth node
 * Return: nth node. if node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
