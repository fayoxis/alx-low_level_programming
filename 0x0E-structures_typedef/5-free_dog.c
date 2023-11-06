#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a struct dog
 * @d: pointer to the struct dog to free
 */
void free_dog(dog_t *d)
{
if (d)
{
do {
free(d->name);
free(d->owner);
free(d);
} while (0);
}
}
