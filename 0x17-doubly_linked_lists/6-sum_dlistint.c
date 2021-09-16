#include "lists.h"
#include <stdio.h>
/**
* sum_dlistint - Function that returns the sum of all the data of a list
* @head: The head of the node
* Return: Always 0 (Success)
*/
int sum_dlistint(dlistint_t *head)
{
	return ((!head ? 0 : head->n + sum_dlistint(head->next)));
}
