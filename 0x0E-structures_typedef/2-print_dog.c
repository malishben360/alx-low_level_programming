#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * print_dog - prints a dog's record
  * @d: pointer to the dog's record
  *
  * Return: nothing.
  */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		char *name = d->name;
		float age = d->age;
		char *owner = d->owner;

		printf("Name: %s\n", (name != NULL) ? name : "(nil)");
		(age <= 0) ? printf("Age: %.6f\n", age) : printf("Age: (nil)\n");
		printf("Owner: %s\n", (owner != NULL) ? owner : "(nil)");
	}
}
