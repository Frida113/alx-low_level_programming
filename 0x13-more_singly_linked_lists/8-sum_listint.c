#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sums all the data of a linked list
 * @head: the pointer to thre linked list
 * Return: 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;

	}

	return (sum);

}
