#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a list
 * @head: pointer to the head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *t;

	while (head == NULL)
		return;

	while (*head)
	{
		t = (*head)->next;
		free(*head);
		*head = t;
	}

	*head = NULL;

}
