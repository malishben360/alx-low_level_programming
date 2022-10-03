#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
  * create_array - create array dynamically
  *
  * @size: the size of array in byte
  * @c: the character to fill the array
  *
  * Description: allocate a memoey of size size
  *
  * Return: Always pointer, otherwise NULL.
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = malloc(sizeof(*ptr) * size);

	if (size > 0)
	{
		if (ptr != NULL)
		{
			for (i = 0; i < size; i++)
			{
				ptr[i] = c;
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
		return (NULL);
	}
}
