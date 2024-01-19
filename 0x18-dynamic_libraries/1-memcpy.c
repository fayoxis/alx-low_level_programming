#include "main.h"

/**
 * *_memcpy - this will copy memory area
 * @dest: it is the destination memory area
 * @src: it is the memory area to copy from
 * @n: the number of bytes to copy
 *
 * Return: returns pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
