#include "function_pointers.h"

/**
  * array_iterator - execute action for each item of
  * array
  * @array: array which items are be passed to action
  * @size: the number of elements in array
  * @action: the call-back function to be invoked
  *
  * Return: nothing.
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		(*action)(*(array + i));
	}
}
