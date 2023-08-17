#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to begin of the double linked list
 * @idx: is the index of the position where the new node is insert.
 * @n: data of the new node
 *
 * Return: address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newElement;
	unsigned int counter = 1;
	dlistint_t *holder;

	holder = *h;
	newElement = malloc(sizeof(dlistint_t));
	if (newElement == NULL)
		return (NULL);

	if (idx == 0)
	{
		newElement->next = holder;
		newElement->n = n;
		newElement->prev = NULL;
		if (holder != NULL)
			holder->prev = newElement;
		*h = newElement;
		return (newElement);
	}
	while (counter != idx)
	{
		if (holder == NULL)
			return (NULL);
		holder = holder->next;
		counter++;
	}
	newElement->next = holder->next;
	newElement->n = n;
	newElement->prev = holder;
	holder->next = newElement;
	if (newElement->next == NULL)
		return (newElement);
	holder = holder->next;
	holder = holder->next;
	holder->prev = newElement;
	return (newElement);
}


