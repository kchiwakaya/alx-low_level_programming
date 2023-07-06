#include "main.h"
/**
 * get_endianness - get the endianness of the machine
 *
 * Return: 0  endian, 1 for little endian
 */
int get_endianness(void)
{
	int end = 1;

	return (*((char *) &end) + '0');
}
