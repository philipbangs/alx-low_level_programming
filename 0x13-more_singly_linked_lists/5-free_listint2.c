#include "lists.h"
#include <stdlib.h>

/**
*releasee_listint2 - release a linked list
*@head: A pointer to a pointer head of  the listint_t
*Description:This function is frees the memory allocatfor list set head to NULL
*/
void free_litint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head)
	{
	temp = (*head)->next;
	free(*head);
	*head = temp;
	}
	*head = NULL;
}
