#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint- prints element in DLL
 * @h: doubly linked list
 * Returns: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;
	if (h == NULL)
		return (counter);
	while (h)
	{	
		printf("%d ", h->n);
		h = h->next;
		counter++;
	}
	return (counter);

}
