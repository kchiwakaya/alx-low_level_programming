#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - function that return the nth element
 * @head: pointer of the head DLL
 * @index: index of the node starting node
 * Return: the index node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *holder = head;
	unsigned int counter = 0;

	while (holder)
	{
		if (counter == index)
		{
			return (holder);
		}
		holder = holder->next;
		counter++;
	}
	return (NULL);
}
