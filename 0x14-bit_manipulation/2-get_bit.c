#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: input
 * @index: index starting from 0 of the bit
 * Return: Always 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int holder;

	if (index > 63)
		return (-1);

	holder = 1 << index;
	return ((n & holder) > 0);
}
