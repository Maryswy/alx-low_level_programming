
#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * free_dog - frees dog (who let the dogs out)
 * @d: dog to free
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
