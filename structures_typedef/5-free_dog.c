#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - frees the dog
 * @d: Pointer to dog
 * Return: nothing/ void
 */

void free_dog(dog_t *d)
{
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);
	d = NULL;
}
