#include "main.h"

/**
 * _memset - Fills a block of memory with a specified value.
 * @s: Pointer to the memory area to be filled.
 * @b: Value to be set.
 * @n: Number of bytes to be filled.
 * Return: Pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
