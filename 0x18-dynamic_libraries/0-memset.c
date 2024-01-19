#include "main.h"

/**
 * *_memset - this will fill memory with a constant byte
 * @s: this is the memory area to be filled
 * @b: this is the char to copy
 * @n: the number of times to copy b
 *
 * Return: pointer to the memory area s
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
