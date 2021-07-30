#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t
 * @head: input header pointer
 * @n: Input data int
 * Description: function that adds a new node at the end of a list_t
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const int n)
{
	list_t *newNode;
	list_t *tmp;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = newNode;
	}
	return (newNode);
}
