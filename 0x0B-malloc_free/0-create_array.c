#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of a given size
 * and assigns each element with a specified character.
 * @size: The size of the array.
 * @c: char to assign
 * Description: This function dynamically allocates
 * an array of size 'size' and assigns each element
 * Return: A pointer to the allocated array, or NULL
 * if the allocation fails.
 */

char *create_array(unsigned int size, char c)
{
char *array;
char *ptr;
unsigned int i;
/* Allocate memory for the array*/
array = malloc(sizeof(char) * size);
if (size == 0 || array == NULL)
return (NULL);
/*
* Use pointer arithmetic to assign
* the specified character to each
* element of the array
*/
ptr = array;
for (i = 0; i < size; i++)
{
*ptr++ = c;
}
return (array);
}
