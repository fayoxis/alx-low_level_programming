#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string to
 * a new memory space location.
 * @str: Input string.
 * Return: Pointer to the duplicated string.
 */
char *_strdup(char *str)
{
char *duplicate;
int i, length = 0;

if (str == NULL)
return (NULL);
/* Calculate the length of the string */

while (str[length] != '\0')
length++;

/* Allocate memory for the duplicate string */
duplicate = malloc(sizeof(char) * (length + 1));
if (duplicate == NULL)
return (NULL);

/* Copy the string */
for (i = 0; i < length; i++)
duplicate[i] = str[i];
duplicate[i] = '\0';
/* Add null terminator to the duplicate string */
return (duplicate);
}
