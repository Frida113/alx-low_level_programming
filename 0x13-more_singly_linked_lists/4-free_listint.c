#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees the list
 * @head: the list
 */

void free_listint(listint_t *head)
{
	listint_t *t;

	while (head)
	{
		t = head->next;
		free(head);
		head = t;
	}
}
