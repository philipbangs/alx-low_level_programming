#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nose - node at the beginning of the list
 * @head: double pointer to the orginal linked list
 * @str: the new string to add to node
 * Return: the address of the new list/element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *moment;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);
	moment = malloc(sizeof(list_t));
	if (moment == NULL)
		return (NULL);
	
	moment->str = strdup(str);

if (moment->str == NULL)
{	
	return (NULL);
}
while (str[len])
{
	len++;
}

	moment->len = len;

	moment->next = *head;
	(*head) = moment;

	return (moment);
	}
