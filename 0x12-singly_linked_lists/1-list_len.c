#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * list_len - length of the string
 * @h: pointer to the first node
 * Return: number of the nodes
 */
size_t list_len(const list_t *h)
{
	int j;

	if (h == NULL)
		return (0);

	for (j = 1; h->next != NULL; j++)
		h = h->next;
	return (j);
}
