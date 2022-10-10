#ifndef DOG_H
#define DOG_H

/**
  * struct dog - The data structure for a dog pet
  * @name: the dog's name
  * @age: the dog age with decimal point
  * @owner: the name of the dog's guidean
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
