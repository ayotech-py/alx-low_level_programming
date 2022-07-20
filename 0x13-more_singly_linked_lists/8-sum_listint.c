#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - sum up the numbers in the list
 * @head: head node
 * Return: Returns the sum
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
