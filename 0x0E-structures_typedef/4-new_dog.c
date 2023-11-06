#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @str: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *str)
{
int length = 0;
for (; str[length] != '\0'; length++)
{
}

return (length);
}

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
int k;
for (k = 0; src[k] != '\0'; k++)
{
dest[k] = src[k];
}
dest[k] = '\0';
return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newDog;
int nameLen, ownerLen;
int k;
nameLen = _strlen(name);
ownerLen = _strlen(owner);
newDog = malloc(sizeof(dog_t));
if (newDog == NULL)
return (NULL);
newDog->name = malloc(sizeof(char) * (nameLen + 1));
if (newDog->name == NULL)
{
free(newDog);
return (NULL);
}
newDog->owner = malloc(sizeof(char) * (ownerLen + 1));
if (newDog->owner == NULL)
{
free(newDog->name);
free(newDog);
return (NULL);
}
for (k = 0; k <= nameLen; k++)
{
newDog->name[k] = name[k];
}
newDog->name[nameLen] = '\0';
for (k = 0; k <= ownerLen; k++)
{
newDog->owner[k] = owner[k];
}
newDog->owner[ownerLen] = '\0';
newDog->age = age;
return (newDog);
}
