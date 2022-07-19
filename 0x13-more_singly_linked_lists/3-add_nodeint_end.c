#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a node to the end of the list
 * @n: element of the new node
 * @head: a pointer pointing to the head node
 * Return: returns the address of the pointer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	temp->n = n;
	temp->next = NULL;
	if (temp == NULL)
		return (NULL);
	if (*head == NULL)
		*head = temp;
	else
	{

		while (*head != NULL)
		{
			*head = (*head)->next;
		}
		*head = temp;
	}
	return (temp);
}
