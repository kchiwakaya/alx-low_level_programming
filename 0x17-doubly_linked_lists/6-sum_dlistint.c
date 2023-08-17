#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_dlistint - sum of all the data (n) of DLL
 * @head: pointer to begin of DLL
 * Return: sum of all nodes data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *holder = head;
	int total = 0;

	if (head == NULL)
		return (0);
	while (holder->next != NULL)
	{
		total += holder->n;
		holder = holder->next;
	}
	total += holder->n;
	return (total);
}
