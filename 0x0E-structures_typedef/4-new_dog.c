#include "dog.h"
#include <stdlib.h>

/**
  * new_dog - creates an instance of the dog type
  * @name: the name of the new dog
  * @age: the new dog's age
  * @owner: the owner of the new dog
  *
  * Return: Always pointer to the new dog, else NULL
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr = malloc(sizeof(dog_t));
	dog_t *ptr_cp = malloc(sizeof(dog_t));
	if (ptr == NULL || ptr_cp == NULL)
		return (NULL);
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;

	ptr_cp->name = name;
	ptr_cp->owner = owner;

	return (ptr);
}
