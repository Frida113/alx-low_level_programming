#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the list
 * Return: deleted jead node data
 */

int pop_listint(listint_t **head)
{
	int head_data;
	listint_t *t;
	listint_t *current;

	if (*head == NULL)
		return (0);

	current = *head;

	head_data = current->n;

	t = current->next;

	free(current);

	*head = t;

	return (head_data);

}
