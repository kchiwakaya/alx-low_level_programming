#include "main.h"
/**
 * flip_bits -  returns the num of bits you would need to flip
 * @n: integer input
 * @m: number of bits
 * Return: Always 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int holder = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			holder = holder + 1;
		m = m >> 1;
		n = n >> 1;
	}

	return (holder);

}
