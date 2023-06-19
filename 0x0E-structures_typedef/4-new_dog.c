#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a nwew dog
 * @name: pointer to the name
 * @age: age of the dog
 * @owner: pointer to the owners name
 *
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int nl = 0, ol = 0;
	int i;

	while (name[nl] != '\0')
		nl++;
	while (owner[ol] != '\0')
		ol++;

	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
		return (NULL);

	n_dog->name = malloc((nl + 1) * sizeof(char));
	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	for (i = 0; i <= nl; i++)
		n_dog->name[i] = *(name + i);
	n_dog->owner = malloc((ol + 1) * sizeof(char));
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	for (i = 0; i <= ol; i++)
		n_dog->owner[i] = *(owner + i);
	n_dog->age = age;
	return (n_dog);
}
