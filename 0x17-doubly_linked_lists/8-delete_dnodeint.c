#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a DLL
 * @head: pointer to start of DLL
 * @index: indicate the element to delete
 * Return: 1 success, -1 failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *holder;
	dlistint_t *deleter;
	unsigned int counter = 1;

	holder = *head;
	if (holder == NULL)
		return (-1);
	if (index == 0)
	{
		deleter = *head;
		*head = holder->next;
		holder = holder->next;
		if (holder != NULL)
			holder->prev = NULL;
		free(deleter);
		return (1);
	}
	
	do{
		if (holder == NULL || holder->next == NULL)
			return (-1);
		holder = holder->next;
		counter++;
	}while (counter != index)
	if (holder->next->next != NULL)
	{
		deleter = holder->next->next;
		free(holder->next);
		holder->next = deleter;
		deleter->prev = holder;
		return (1);
	}
	else
	{
		free(holder->next);
		holder->next = NULL;
		return (1);
	}
}

