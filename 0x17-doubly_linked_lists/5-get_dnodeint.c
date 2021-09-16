#include "lists.h"

/**
 * get_dnodeint_at_index - Function that return the nth node of a list
 * @head: The head of the list
 * @index: The node index
 *
 * Return: If the node does not exist - NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
