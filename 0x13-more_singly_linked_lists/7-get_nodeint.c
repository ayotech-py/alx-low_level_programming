#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: head node pointer
 * @index: the nth node
 * Return: Returns the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i, j;

	temp = head;
	while (head != NULL)
	{
		head = head->next;
		j++;
	}
	if (index > j)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		temp = temp->next;
	}
	return (temp);
}
