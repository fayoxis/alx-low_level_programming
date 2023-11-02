#include <stdlib.h>
#include "main.h"


/**
 * _memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: byte value to be copied
 * @n: number of bytes to be filled
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int k;

for (k = 0; k < n; k++)
{
s[k] = b;
}
return (s);
}


/**
 * _calloc - allocates memory for an array and initializes it to 0
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory (or NULL if allocation fails)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;

if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(size * nmemb);
if (ptr == NULL)
return (NULL);

_memset(ptr, 0, nmemb * size);
return (ptr);
}

