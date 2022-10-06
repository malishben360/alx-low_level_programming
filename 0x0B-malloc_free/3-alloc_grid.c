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
	int j;
	int **ptr;

	if (!(width <= 0 || height <= 0))
	{
		ptr = (int **)malloc(width * sizeof(int *));
		if (ptr != NULL)
		{
			for (i = 0; i < width; i++)
			{
				ptr[i] = (int *)calloc(height, sizeof(int));
				if (ptr[i] == NULL)
				{
					free(ptr[i]);
					return (NULL);
				}
			}
			for (i = 0; i < width; i++)
			{
				for (j = 0; j < height; j++)
				{
					ptr[i][j] = 0;
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
