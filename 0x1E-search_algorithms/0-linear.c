#include "search_algos.h"

/**
 * linear_search - search array for value using Linear search algorithms
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value found the number
 * or -1 else not found
 **/

int linear_search(int *array, size_t size, int value)
{
	size_t j;

	if (array == NULL)
		return (-1);

	for (j = 0; j < size; ++j)
	{	
		printf("Value checked array[%d] = [%d]\n", (int)j, array[j]);
		if (value == array[j])
			return ((int)(j));
	}
	return (-1);
}
