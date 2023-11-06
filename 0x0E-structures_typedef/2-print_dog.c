#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints the details of a dog
 * @d: pointer to the struct dog to print
 *
 * This function takes a pointer to a struct
 * dog and prints its details,
 * including the name, age, and owner.
 * If the name or owner is NULL, it
 * is replaced with the string "(nil)" before printing.
 */

void print_dog(struct dog *d)
{
if (d == NULL)
return;
/* Check if the name is NULL and replc it w "(nil)" */
d->name = (d->name == NULL) ? "(nil)" : d->name;

/* Check if the owner is NULL and replc it w "(nil)" */
d->owner = (d->owner == NULL) ? "(nil)" : d->owner;

/* Print the details of the dog */
printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
