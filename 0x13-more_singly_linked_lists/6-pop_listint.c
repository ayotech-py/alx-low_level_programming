#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes a node from the list
 * @head: A pointer pointing to the head node
 * Return: returns the element of the deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	temp = *head;
	if(temp == NULL)
		return NULL;
	*head = temp->next;
	data = temp->n;
	free(temp);
	return (data);
}
