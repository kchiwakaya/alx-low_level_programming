#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * using binary
 *
 * @array: pointer to first element of the array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value
 **/

int binary_search(int *array, size_t size, int value)
{
	int init = 0;
	int finish = (int)size - 1;
	int	mean;
	int	i;

	if (array == NULL)
		return (-1);

	while (init <= finish)
	{
		printf("Searching in array: ");
		for (i = init; i < finish; ++i)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[finish]);
		mean = (init + finish) / 2;
		if (array[mean] < value)
			init = mean + 1;
		else if (array[mean] > value)
			finish = mean - 1;
		else
			return (mean);
	}
	return (-1);
}

