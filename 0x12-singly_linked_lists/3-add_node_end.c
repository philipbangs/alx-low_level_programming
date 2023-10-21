#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
    list_t *moment;
    unsigned int len = 0;

    list_t *new;

    if (str == NULL)
        return (NULL);

    moment = malloc(sizeof(list_t));
    if (moment == NULL)
        return (NULL);

    moment->str = strdup(str);

    if (moment->str == NULL)
    {
        free(moment);
        return (NULL);
    }

    while (str[len])
    {
        len++;
    }

    moment->len = len;
    moment->next = NULL;

    if (*head == NULL)
    {
        *head = moment;
    }
    else
    {
        new = *head;
        while (new->next != NULL)
        {
            new = new->next;
        }
        new->next = moment;
    }

    return (moment);
}

