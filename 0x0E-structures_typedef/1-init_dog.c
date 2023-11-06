#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 * Check if the pointer is NULL
 * If it is, allocate memory for a new struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
d = malloc(sizeof(struct dog));
if (d == NULL)
{
/* Error handling for failed memory allocation */
return;
/* or take appropriate action */
}
}

/* Assign the name, age, and owner values to the struct members */
d->name = name;
d->age = age;
d->owner = owner;
}
