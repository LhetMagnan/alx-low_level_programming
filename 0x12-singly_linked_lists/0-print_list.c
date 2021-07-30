#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list
 * @h: header pointer
 * Description: function that prints all the elements of a list_t list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t cont = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		cont++;
	}
	return (cont);
}
