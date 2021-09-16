#include "lists.h"
/**
* free_dlistint - Function that frees a list
* @head: The head of the node
* Return: Always 0 (Success)
*/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	free_dlistint(head->next);
	free(head);
}
