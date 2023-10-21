#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - shows the numbers of elements of a linked list
 * @h: Pointerbto the linked list_t
 *
 *Return: numbers of elements of list_h
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
