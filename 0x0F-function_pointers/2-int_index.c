#include <stddef.h>

/**
 * int_index - searches for an integer in an array
 * @array: pointer to the array
 * @size: number of elements in the array
 * @cmp: pointer to the function used to compare values
 *
 * Return: Index of the first element for which
 * the cmp function does not return 0.
 *         If no element matches or size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && cmp && size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
