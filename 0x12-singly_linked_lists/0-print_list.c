#include "lists.h"
/*
 * print_list - prints all the elements of a list
 * @h: pointer to the head of the list
 * Return: the  number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;
	const list_t *print;

	print = h;
	while (print != NULL)
	{
		if(print->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", print->len, print->str);
		}
		print = print->next;
		node_count++;
	}
	return node_count;
}
