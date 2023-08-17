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
		return;
	do{
		printf("%d ", h->n);
		counter++;
	}while (h);
	return (counter);

}
