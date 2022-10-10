#include "dog.h"

/**
  * init_dog - initialize the properties of the dog
  * structure
  * @d: pointer to new dog instance
  * @name: name of the dog
  * @age: age of the dog
  * @owner: the dog's guidean
  *
  * Return: nothing.
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
