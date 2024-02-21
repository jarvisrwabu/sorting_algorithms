#include "sort.h"

/**
 * swap - swaps two integers
 * @a: The first integer
 * @b: The second integer
 * Return: Nothing
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
		printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}


/**
 * bubble_sort - Arrange in ascending order using
 * bubble sort algorithm
 * @array: Pointer to array
 * @size: Size of the array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t n = size;
	size_t i;

	do {
		size_t newn = 0;

		for (i = 1; i < n; i++)
		{
			if (array[i - 1] > array[i])
			{
				swap(&array[i - 1], &array[i]);
				print_array(array, size);
				newn = i;
			}
		}
		n = newn;
	} while (n > 1);
}
