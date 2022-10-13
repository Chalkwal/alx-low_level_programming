#include "function_pointers.h"

/**
 * int_index - function that searches for integer
 * @array: array to search in
 * @size: size of the array
 * @cmp: pointer to the comparing function
 * Return: index of the first elememt for which cmp
 * funtion does not return 0, or -1 if no match is
 * found or if size is negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]) != 0)
	return (i);
	}
	}
	return  (-1);
}
