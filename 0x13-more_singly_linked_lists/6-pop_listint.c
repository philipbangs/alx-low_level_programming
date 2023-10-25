#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - delete the head node of linked list
 * @h: pointer to the first elemt in the linked list
 *
 * Return: data was deleted, or 0 if the list empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	int n;

	if (!head || !*head)
	return (0);

	n = (*head)->n;
	temp = *head;
	*head = temp->next;
	free(temp);

	return n;
}
