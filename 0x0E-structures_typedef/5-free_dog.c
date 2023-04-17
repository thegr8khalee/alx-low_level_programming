#include <stdio.h>
#include "dog.h"

/**
 * function that frees dogs
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
