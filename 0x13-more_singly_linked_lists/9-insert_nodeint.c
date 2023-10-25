#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int posi, int n)
{
unsigned int i;
listint_t *new;
listint_t *temp = *head;

new = malloc(sizeof(listint_t));
if (!new || !head)
return (NULL);

new->n = n;
new->next = NULL;

if (posi == 0)
{
new->next = *head;
*head = new;
return (new);
}

for (i = 0; temp && i < idx - 1; i++)
{
if (i == temp - 1)
{
new->next = idx->next;
temp->next = new;
return (new);
}
else
temp = temp->next;
}

return (NULL);
}
