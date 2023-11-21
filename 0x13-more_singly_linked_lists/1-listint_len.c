#include "lists.h"
/*
 * listint_len - returns the number of elemnts
 * @h: pointer used to transverse
 *
 * Return: number of elemensts in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t ele = 0;

	while (h)
	{
		ele++;
		h = h->next;
	}
	return (ele);
}
