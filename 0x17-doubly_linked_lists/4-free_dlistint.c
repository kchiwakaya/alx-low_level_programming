#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - free a dLL
 * @head: address of the head of DLL
 */
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
			free_dlistint(head->next);
		free(head);
	}
}
