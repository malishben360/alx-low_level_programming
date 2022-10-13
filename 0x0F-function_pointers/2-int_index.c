#include "function_pointers.h"

/**
  * int_index - search for an integer in an array
  * @array: the the list to tranverse through
  * @size: the size of the list
  * @cmp: the call-back fumction for comparing items
  *
  * Return: the index of an element, else -1 (Failure).
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;
	int i;

	if (!(size <= 0) && array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			index = (*cmp)(array[i]);
			if (index != 0)
			{
				return (i);
			}
		}
		return (-1);
	}
	return (-1);
}
