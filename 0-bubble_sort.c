#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: Pointer to the array
 * @size: size of int
 *
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	int temp;

	if (array == NULL || size < 2)
	{
		return;
	}

	for (i = 0; i < size - 1; i++)
	{

		for (j = 0; j < size; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
