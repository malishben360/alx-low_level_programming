#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - creats 2D array
  *
  * @width: number of rows
  * @height: nymber of colums
  *
  * Descriprion: creat non empty 2D array w X h
  *
  * Return: pointer to a 2D array of memory block
  */
int **alloc_grid(int width, int height)
{
	int i;
	int **ptr;

	if (!(width <= 0 || height <= 0))
	{
		ptr = malloc(width * sizeof(int *));
		if (ptr != NULL)
		{
			for (i = 0; i < width; i++)
			{
				ptr[i] = calloc(height, sizeof(int));
				if (ptr[i] == NULL)
				{
					return (NULL);
				}
			}

			return (ptr);
		}
		else
		{
			return (NULL);
		}
	}
	else
	{
		return (0);
	}
}
