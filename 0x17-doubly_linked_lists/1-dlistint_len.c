#include "lists.h"

/**
* dlistint_len - Number of elements in a linked list
* @h: node of a dlistint t
* Return: Always 0 (Success)
*/
size_t dlistint_len(const dlistint_t *h)
{
	if (h == NULL)
		return (0);
	return (1 + dlistint_len(h->next));
}
