#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - Frees the list memory
 * @head: the pointer to the address of the head node
 */
void free_listint(listint_t *head)
{
	listint_t *freePtr;

	while (head != NULL)
	{
		freePtr = head;
		head = head->next;
		free(freePtr);
	}
}
