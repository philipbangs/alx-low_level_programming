#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: head of list_t list to be freed
 * Return: nothing to return
 */
void free_list(list_t *head)
{
list_t *period;

while (head)
{
period = head->next;
free(head->str);
free(head);
head = period;
}
}

