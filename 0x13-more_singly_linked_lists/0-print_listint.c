#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - Prints the elements of a list
 * @h: pointer to the head node
 * Return: returns the size of the list
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
