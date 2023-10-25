#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a linked list
 * @head: listint_t list to be realised
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
	head = head->next;
	current = head;
	free(current);
	}
}
