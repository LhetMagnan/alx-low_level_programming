#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t number_of_nodes = 0;
	const list_t *head = h;

	while (head != NULL)
	{
		printf("[%d] %s\n", head->len,
		head->str != NULL ? head->str : "(nil)");
		head = head->next;
		number_of_nodes++;
	}
	return (number_of_nodes);
}
