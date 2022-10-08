#include "main.h"
#include <stdlib.h>

/**
  * -calloc - allocates memory using malloc
  * @nmemb: number of elements
  * @size: sizebof each element in byte
  *
  * Return: Always pointer, NULL otherwise
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	if (ptr != NULL)
	{
		for (i = 0; i < nmemb * size; i++)
		{
			ptr[i] = '0';
		}
		return ((void *) ptr);
	}
	else
	{
		return (NULL);
	}
}
