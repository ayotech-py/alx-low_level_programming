#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints the list_s list
 * @h: list to be printed
 * Return: Returns the length of the list
 */
size_t print_list(const list_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		i++;
	}
	return (i);
}
