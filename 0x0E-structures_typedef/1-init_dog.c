#include "dog.h"

/**
 * init_dog -  initialize a variable of type struct dog
 * @d: pointer to the struct dog
 * @name: pointer to the name of the dog
 * @age: pointer to the age of the dog
 * @owner: pointer to the owner's name
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
