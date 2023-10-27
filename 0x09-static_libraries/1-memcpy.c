#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: pointer to the destination memory area.
 * @src: pointer to the source memory area.
 * @n: number of bytes to be copied.
 * 
 * Return: pointer to the destination memory area.
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int k;
for (k = 0; k < n; k++)
*(dest + k) =  *(src + k);
return (dest);
}
