#include <stdio.h>
#include "dog.h"

/**
 * function that prints a struct dog
 */

void print_dog(struct dog *d);
{
	if (d->name != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else 
			printf("Name: (nil)\n");
		printf("Age: %.6f\n", d->age);
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: %s\n", d->owner);
	}
}
