#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - frees the memory allocated to dog type
  * @d: the memory pointer to be freed
  *
  * Return: nothing.
  */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
