#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: input header pointer
 * description: function that frees a list_t list
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
