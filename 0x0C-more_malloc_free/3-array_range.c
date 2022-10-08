#include "main.h"
#include <stdlib.h>

/**
  * array_range - create array within a range
  * @min: starting point inclusive
  * @max: end point inclusive
  *
  * Return: Always a pointer, NULL otherwise.
  */
int *array_range(int min, int max)
{
	int i;
	int range;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}

	range = max - min + 1;
	ptr = malloc(range * sizeof(int));
	if (ptr != NULL)
	{
		for (i = 0; i <= range; i++)
		{
			ptr[i] = min + i;
		}
		return (ptr);
	}
	else
	{
		return (NULL);
	}
}
