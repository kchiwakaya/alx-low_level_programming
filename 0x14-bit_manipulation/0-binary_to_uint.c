#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary string
 *
 * Return: the unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int c = 0;
	int num = 0;
	int index = 1;
	unsigned int base10 = 0;

	if (b == NULL)
		return (0);
	while (b[c] != '\0')
	{
		if ((b[c] - '0') != 0 && (b[c] - '0') != 1)
			return (0);
		num++;
		c++;
	}
	c = num -1;
	while ( c >= 0)
	{
		if (b[c] == '1')
			base10 += index;
		index = index * 2;
		c--;
	}
	return (base10);
}

