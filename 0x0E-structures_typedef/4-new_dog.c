#include "dog.h"
#include <stdlib.h>

char *cp(char *str);

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
	char *strn;
	char *strw;
	dog_t *ptr;

	strn = cp(name);
	strw = cp(owner);
	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL || strn == NULL || strw == NULL)
		return (NULL);
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;

	return (ptr);
}

/**
  * cp - duplicate str into a new memory location
  * @str: the string to be copied
  *
  * Return: Always a pointer, else NULL
  */
char *cp(char *str)
{
	int i;
	char *p;

	if (str != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)

		p = malloc((i + 1) * sizeof(char));
		if (p != NULL)
		{
			i = 0;
			while (*(str + i) != '\0')
			{
				p[i] = *(str + i);
				i++;
			}
			p[i] = '\0';
			return (p);
		}
	}
	return (NULL);
}
