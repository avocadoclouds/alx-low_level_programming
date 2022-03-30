#include "search_algos.h"

/**
* binary_search - a function that searches for a value
* in a sorted array of integers
* using the Binary search algorithm
* @array: pointer to the first element of the array to search in
* @size: the number of elements in array
* @value: the value to searches
*
* Return: value if found or -1 if not
*/

int binary_search(int *array, size_t size, int value)
{

	size_t i;
	size_t lft;
	size_t rt;

	if (array == NULL)
	{
		return (-1);
	}

	for (lft = 0, rt = size - 1; rt >= lft;)
	{

		printf("Searchin in array: ");
		for (i = lft; i < rt; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);

		i = lft + (rt - lft) / 2;

		if (array[i] == value)
		{
			return (i);
		}
		if (array[i] > value)
		{
			rt = i - 1;
		}
		else
		{
			lft = i + 1;
		}

	}
	return (-1);
}
