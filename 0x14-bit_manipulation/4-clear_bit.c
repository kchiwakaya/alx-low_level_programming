#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to long int
 * @index:  is the index, starting from 0 of the bit you want to set
 * Return: 1 
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n = *n & ~(1ul << index);
	return (1);
}
