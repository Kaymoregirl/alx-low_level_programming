#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free memory allocated for a struct dog
 * @k: struct free dog
 */

void free_dog(dog_t *k)
{
	if (k)
	{
		free(k->name);
		free(k->owner);
		free(k);
	}
}
