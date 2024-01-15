#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: The destination memory area
 * @src: the memory area to copy from
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
