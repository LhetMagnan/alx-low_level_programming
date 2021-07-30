#include <stdlib.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: header pointer
 * @n: new node to be added
 * Description: function that adds a new node at the beginning of
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const int n)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
