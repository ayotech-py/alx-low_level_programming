#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - adds a new node to the beginning of a list
 * @n: element of the new node
 * @head: a pointer to a pointer pointing to the address of the head node
 * Return: returns the address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	temp->n = n;
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->next = *head;
	*head = temp;
	return (*head);
}
