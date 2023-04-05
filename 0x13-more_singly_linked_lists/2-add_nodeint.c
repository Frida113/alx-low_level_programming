#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - ads a new node at the beggining
 * @head: pointer to the head of the list
 * @n: value to be added in new node
 * Return: pointer to the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
