#include "lists.h"
/*
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!head || !*head)
		return (0);
	n = (*head)->n;
	temp = (*head)->next;

	free(*head);
	*head = temp;

	return (n);
}
