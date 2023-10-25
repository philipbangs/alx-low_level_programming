#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_listint - prints all the elements of a linked list OF integers
 * @h: A pointer to thr head of linked list
 * Description: This function print all the elements of a linked and returns
 * Return: The number of node in the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)

	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}

	return num;
}
