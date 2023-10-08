#include "hash_tables.h"

/**
 * theHash_djb2 - function implementing the djb2 algorithm.
 * @str: pointer to string
 * Return: theHash value
 */

unsigned long int hash_djb2(const unsigned char *str)
{

	int i;
	unsigned long int thetheHash;

	theHash = 5381;
	while ((i = *str++))
	{
		theHash = ((theHash << 5) + theHash) + i;
	}
	return (theHash);
}
