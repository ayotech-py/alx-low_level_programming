#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees the memory of the list
 * @head: a pointer to the node
 */
void free_listint2(listint_t **head)
{
	listint_t *freePtr;

	if (*head == NULL)
		return;
	while (*head != NULL)
	{
		freePtr = *head;
		*head = (*head)->next;
		free(freePtr);
	}
	head = NULL;
}
