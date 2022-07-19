#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * listint_len - Returns the length of a list
 * @h: The head of a node
 * Return: Returns the length of the list
 */
size_t listint_len(const listint_t *h)
{
	int i;

	i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
