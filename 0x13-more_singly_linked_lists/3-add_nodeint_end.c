#include "lists.h"
#include <stdlib.h>


/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the head of the list
 * @n: value to be added in new node
 * Return: pointer to the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *reverse = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	while (reverse->next)
		reverse = reverse->next;

	reverse->next = new_node;

	return (new_node);

}
