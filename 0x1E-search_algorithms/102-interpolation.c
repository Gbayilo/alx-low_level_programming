#include <stdio.h>

/**
* interpolation_search - Searches for a value in a sorted array of integers.
*
* @array: A pointer to the first element of the array to search in.
* @size: The number of elements in array.
* @value: The value to search for.
*
* Return: The first index where value is located.
*         If value is not present in array or if array is NULL,
*         your function must return -1.
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t start, end, pos;
	double fraction;

	if (array == NULL)
		return (-1);

	start = 0;
	end = size - 1;

	while (start <= end && value >= array[start] && value <= array[end])
	{
		if (start == end)
		{
			if (array[start] == value)
				return (start);
			return (-1);
		}

		    fraction = (double)(end - start) / (array[end] - array[start]);
			pos = start + (fraction * (value - array[start]));

		if (pos >= size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}

	    printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			start = pos + 1;
		else
			end = pos - 1;
	}

	return (-1);
}
