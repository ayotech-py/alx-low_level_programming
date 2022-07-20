#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - insert a node at an index
 * @head: head node
 * @idx: index
 * @n: element of the new node
 * Return: Returns the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *temp2 = malloc(sizeof(listint_t));
	unsigned int i;

	if (temp2 == NULL)
		return (NULL);
	temp2->n = n;
	temp2->next = NULL;
	for (i = 0; i < idx - 1; i++)
	{
		temp = temp->next;
	}
	temp2->next = temp->next;
	temp->next = temp2;
	return (temp2);
}
