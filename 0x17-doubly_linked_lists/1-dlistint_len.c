#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - returns number of elements in a linked list
 * @h: head of the list
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
