#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - allocates memory space
  * @b: memory size in bytes
  *
  * Description: using the malloc function to
  * alocate memory space of b size
  *
  * Return: Always a point, 98 error code otherwise.
  */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr != NULL)
	{
		return (ptr);
	}
	else
	{
		exit(98);
	}
}
