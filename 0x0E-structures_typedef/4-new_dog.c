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
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;

	if (ptr->name == name && ptr->owner == owner)
		return (ptr);
	return (NULL);
}
