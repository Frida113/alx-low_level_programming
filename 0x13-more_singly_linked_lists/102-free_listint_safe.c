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
	listint_t *curr, *temp;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (count);

	while (*h != NULL)
	{
		count++;
		curr = *h;
		*h = (*h)->next;

		curr->next = NULL;

		temp = *h;
		while (temp != NULL)
		{
			if (temp == curr)
			{
				*h = NULL;
				while (curr != NULL)
				{
					temp = curr->next;
					free(curr);
					curr = temp;
				}
				return (count);
			}
			temp = temp->next;
		}
		free(curr);
	}
	return (count);

}
