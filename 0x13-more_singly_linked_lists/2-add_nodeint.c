#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds a node to the beginning of a linked list
 * @head: a pointer to a pointer to the head of the list
 * @n: integer value to add to the new node
 *
 * Return: A pointer to the newly added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
