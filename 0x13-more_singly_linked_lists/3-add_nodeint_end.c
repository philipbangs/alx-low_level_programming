#include "lists.h"
#include <stdlib.h>

/**
 * add_node_end - add a node at the end of a linked list
 * @head: A  pointer to a pointer to the head of the list
 *@n:The integer value to add to the new node
 *
 *Description: function adds a new node with the integer at The end of a list
*
 * Return: A pointer to the newly added node, or Null if failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *jst = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
	*head = new;
	return (new);
	}
	while (jst->next)
		jst = jst->next;
	jst->next = new;
	return (new);
}
