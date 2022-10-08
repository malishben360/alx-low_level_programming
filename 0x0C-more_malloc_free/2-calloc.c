#include "main.h"
#include <stdlib.h>

/**
  * _calloc - allocates memory using malloc
  * @nmemb: number of elements
  * @size: sizebof each element in byte
  *
  * Return: Always pointer, NULL otherwise
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int bytes;
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	bytes = nmemb * size;
	ptr = malloc(bytes);
	if (ptr != NULL)
	{
		for (i = 0; i < nmemb * size; i++)
		{
			ptr[i] = 0;
		}
		return ((void *) ptr);
	}
	else
	{
		return (NULL);
	}
}
