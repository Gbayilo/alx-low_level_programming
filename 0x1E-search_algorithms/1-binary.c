#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers.
 *
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: The index where value is located.
 *         If value is not present in array or if array is NULL
 *         your function must return -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t idx, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");

		for (idx = left; idx < right; idx++)
			printf("%d, ", array[idx]);
		printf("%d\n", array[idx]);

		idx = left + (right - left) / 2;

		if (array[idx] == value)
			return (idx);
		if (array[idx] > value)
			right = idx - 1;
		else
			left = idx + 1;
	}

	return (-1);
}
